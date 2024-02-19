#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check(int length, vector<int> arr);

int C;

int main()
{
	freopen("input.txt", "rt", stdin);

	int N;
	cin >> N >> C;

	vector<int> arr;

	int temp;

	for (int i = 1; i <= N; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());

	int lt = arr[0], rt = arr.back() - arr.front(),Max=0;

	while (lt <= rt)
	{
		int length = (lt + rt) / 2;
		cout << "f: " << lt << "	b: " << rt << "		t: " << length << endl;
		if (check(length, arr) == true)
		{
			lt = length + 1;
			Max = length;
		}
		else
			rt = length - 1;
	}

	cout << Max;

	return 0;
}

bool check(int length, vector<int> arr)
{
	int temp = arr[0] + length, cnt = 1;
	for (int i = 1; i < arr.size(); i++)
	{
		cout << "arr[i] : " << arr[i] << " temp : " << temp << " cnt : "<< cnt << endl;
		if (arr[i] >= temp)
		{
			cnt++;
			temp = arr[i] + length;
		}
		
		if (cnt >= C)
			break;
	}

	cout << cnt << endl;

	if (cnt != C)
		return false;
	return true;
}