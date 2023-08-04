#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
#include<math.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n,last,temp,flag=1;
	int* arr;
	scanf("%d", &n);
	scanf("%d", &last);

	arr = (int*)malloc(sizeof(int) * n);
	memset(arr, 0, sizeof(int) * n);

	for (int i = 2; i <= n; i++)
	{
		scanf("%d", &temp);
		if (abs(last - temp) <= n - 1 && abs(last - temp) >= 1)
		{
			if (arr[abs(last - temp)] == 0)
				arr[abs(last - temp)]++;
			else
			{
				flag = 0;
				break;
			}
		}
		else
		{
			flag = 0;
			break;
		}
		last = temp;
	}
	if (flag == 0)
		printf("NO");
	else
		printf("YES");
}