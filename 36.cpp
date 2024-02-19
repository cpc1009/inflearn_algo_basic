/*#define _CRT_SECURE_NO_WARNINGS
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
}*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	freopen("input.txt", "rt", stdin);
	int n,j;
	cin >> n;

	vector<int> arr(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 2; i <= n; i++)
	{
		int temp = arr[i];
		for (j = i - 1; j >= 1; j--)
		{
			if (temp < arr[j])
				arr[j + 1] = arr[j];
			else break;
		}
		arr[j + 1] = temp;
	}

	for (int i = 1; i <= n; i++)
		cout << arr[i] << " ";
}