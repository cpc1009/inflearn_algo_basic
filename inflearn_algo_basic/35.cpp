/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n, temp, idx=1;
	scanf("%d", &n);
	vector<int> arr(n + 1);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++)
	{
		if (arr[i] < 0)
		{
			for (int j = i; j >= idx+1; j--)
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			idx++;
		}
	}

	for (int i = 1; i <= n; i++)
		printf("%d ", arr[i]);
}*/
#include<iostream>
using namespace std;

