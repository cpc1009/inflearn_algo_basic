#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
	freopen("input.txt", "rt", stdin);
	int n, temp1,temp2, idx = 1,j;
	scanf("%d", &n);
	vector<int> arr(n + 2);

	scanf("%d", &arr[1]);
	for (int i = 1; i <= n-1; i++)
	{
		scanf("%d", &temp1);
		for (j = i; j >= 1; j--)
		{
			if (temp1 < arr[j])
				arr[j + 1] = arr[j];
			else break;
		}
		arr[j + 1] = temp1;
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", arr[i]);
}