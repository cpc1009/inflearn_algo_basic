#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
	freopen("input.txt", "rt", stdin);

	int n, search;
	scanf("%d %d", &n, &search);

	vector<int> arr(n + 1);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr.begin() + 1, arr.end());

	int st = 1, end = n;
	int point = (st + end) / 2;

	while (st <= end)
	{
		if (arr[point] == search)
			break;

		if (arr[point] < search)
			st = point;
		else
			end = point;
		point = (st + end) / 2;
	}
	printf("%d", point);
}