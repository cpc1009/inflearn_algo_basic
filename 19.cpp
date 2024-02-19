#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	
	int n;
	int *arr,max,cnt=0;
	scanf("%d", &n);

	arr= (int*)malloc(sizeof(int) * (n+1));

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	max = arr[n];
	for (int i = n-1; i >= 1; i--)
	{
		if (arr[i] > max)
		{
			cnt++;
			max = arr[i];
		}
			
	}
	printf("%d", cnt);
	free(arr);
}