#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
#include<math.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n;
	int* arr, * rank;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * (n + 1));
	rank = (int*)malloc(sizeof(int) * (n + 1));

	memset(rank, 0, sizeof(int) * (n + 1));

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i] < arr[j])
				rank[i]++;
		}
	}

	for (int i = 1; i <= n; i++)
		printf("%d ", rank[i]+1);
}