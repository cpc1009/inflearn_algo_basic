#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
	freopen("input.txt", "rt", stdin);
	int n,temp,last;
	scanf("%d", &n);
	vector<int> arr(n + 1);


	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);


	for (int i = 1; i <= n-1; i++)
	{
		for (int j = 1 ; j <= n-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", arr[i]);
}