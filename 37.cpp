#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
int check(int cmp,int *arr,int size)
{
	for (int i = 1; i <= size; i++)
	{
		if (arr[i] == cmp)
			return i;
	}
	return 0;
}
void move(int temp, int last,int *arr)
{
	int pot,i;
	for (i = last; i >= 2; i--)
		arr[i] = arr[i - 1];
	arr[i] = temp;
}
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n, size, temp,*arr,flag=0;
	scanf("%d %d", &size, &n);
	int b[10] = { 0, };

	arr = (int*)malloc(sizeof(int) * (n + 1));
	memset(arr, 0, sizeof(int) * (n + 1));

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &temp);
		if (check(temp, arr, size) > 0)
			move(temp, check(temp, arr, size), arr);
		else
		{
			for (int j = 1; j <= n-1; j++)
			{
				if (arr[j] == 0 || j == (n-1))
				{
					move(temp, j + 1, arr);
					break;
				}
			}
		}
	}
	for (int i = 1; i <= size; i++)
		printf("%3d ", arr[i]);
}

/*
#include <stdio.h>
int C[20];
int main() {
	freopen("input.txt", "rt", stdin);
	int s, n, a, i, j, pos;
	scanf("%d %d", &s, &n);
	for (i = 1; i <= n; i++) 
	{
		scanf("%d", &a);
		pos = -1;
		for (j = 0; j < s; j++) 
			if (C[j] == a) pos = j;
		if (pos == -1) 
		{
			for (j = s - 1; j >= 1; j--) 
				C[j] = C[j - 1];
		}
		else {
			for (j = pos; j >= 1; j--) 
				C[j] = C[j - 1];
		}
		C[j] = a;
	}
	for (i = 0; i < s; i++) 
		printf("%d ", C[i]);
	return 0;
}
*/

