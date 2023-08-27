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


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;

	vector<int> arr(n + 1);

	for (int i = 1; i <= n; i++)
	{
		int temp;
		cin >> temp;

		if (temp < 0)
		{
			int j;
			for (j = i - 1; j >= 1; j--)
			{
				if (arr[j] < 0)
					break;
				else
					arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
		else
			arr[i] = temp;
	}

	for (int i = 1; i <=n; i++)
		cout << arr[i] << " ";
	return 0;
}

















