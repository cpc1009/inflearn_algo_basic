#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
	freopen("input.txt", "rt", stdin);
	int n, temp,cnt=0,idx;
	scanf("%d", &n);
	vector<int> arr(n + 1);

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++)
	{
		idx = i;
		for (int j = i + 1; j <= n; j++)
		{
			if (arr[idx] < arr[j])
				idx = j;
		}
		temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i+1; j <= n; j++)
		{
			if (arr[i] == arr[j])
				i++;
			else break;
		}
		cnt++;
		if (cnt == 3)
		{
			printf("%d\n", arr[i]);
			break;
		}
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", arr[i]);
}