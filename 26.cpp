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
	scanf("%d", &n);

	int* arr, * rank,cnt=1;
	arr = (int*)malloc(sizeof(int) * (n + 1));
	rank = (int*)malloc(sizeof(int) * (n + 1));

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i=n; i >= 1; i--)
	{
		for (int j = i - 1; j >= 1; j--)
		{
			if (arr[i] <= arr[j])
				cnt++;
		}
		rank[i] = cnt;
		cnt = 1;
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", rank[i]);
}