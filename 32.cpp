#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
#include<math.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n,temp;
	int arr[101];
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", arr[i]);
}