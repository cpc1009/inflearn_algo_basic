/*#define _CRT_SECURE_NO_WARNINGS
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
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	freopen("input.txt", "rt", stdin);

	int n,target;
	cin >> n;
	cin >> target;

	vector<int> arr(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	sort(arr.begin() + 1, arr.end());

	int front = 1, back = n,point;
	point = (front + back) / 2;
	while (front <= back)
	{
		if (arr[point] == target)
			break;
		else if (arr[point] > target)
			back = point - 1;
		else
			front = point + 1;
		point = (front + back) / 2;
	}

	cout << point;

	return 0;
}
*/


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ref(int front, int back, int target, vector<int> arr);

int main()
{
	freopen("input.txt", "rt", stdin);

	int n, target;
	cin >> n;
	cin >> target;

	vector<int> arr(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	sort(arr.begin() + 1, arr.end());

	int front = 1, back = n;
	ref(front, back, target, arr);

	return 0;
}

void ref(int front, int back, int target, vector<int> arr)
{
	int point = (front + back) / 2;

	if (!(front <= back))
		return;

	if (arr[point] == target)
		cout << point;
	else if (arr[point] > target)
		ref(front, point-1, target, arr);
	else
		ref(point+1, back, target, arr);
}