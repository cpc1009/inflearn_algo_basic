/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	freopen("input.txt", "rt", stdin);

	int p, n;

	cin >> p >> n;

	vector<int> arr;

	int temp;
	for (int i = 1; i <= p; i++)
		arr.push_back(i);
	

	int i = 0,cnt=1,cou=0;

	while (1)
	{
		if (cnt != n && arr[i] != -1)
		{
			i++;
			cnt++;
		}
		else if (arr[i] == -1)
			i++;
		else
		{
			arr[i] = -1;
			i++;
			cnt = 1;
			cou++;
		}

		if (i == p)
			i = 0;
		if (cou == p - 1)
			break;
	}

	for (i = 0; i < p; i++)
	{
		if (arr[i] != -1)
			cout << arr[i] << endl;
	//	cout << arr[i];
	}
	return 0;
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	freopen("input.txt", "rt", stdin);

	int p, n;
	cin >> p >> n;
	vector<int> arr(p+1);

	int i = 1, cnt = 1,cou=0;
	while (1)
	{
		if (cnt == n && arr[i] != 1)
		{
			cnt = 1;
			arr[i] = 1;
			cou++;
			if (cou == p - 1)
				break;
		}
			
		if (i <= p && arr[i] != 1)
			cnt++;

		i++;
		if (i > p)
			i	 = 1;
	}

	for (i = 1; i <=p; i++)
	{
		if (arr[i] == 0)
			cout << i << endl;
	}

	return 0;
}*/


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>

using namespace std;

int main()
{
	freopen("input.txt", "rt", stdin);
	queue<int> que;

	int p, n;
	cin >> p >> n;

	for (int i = 1; i <= p; i++)
		que.push(i);

	int cnt = 0, num=1;
	
	while (cnt < p-1)
	{
		if (num < n)
		{
			que.push(que.front());
			num++;
		}
		else
		{
			num = 1;
			cnt++;
		}	
		que.pop();
		//cout << que.front() << endl;
	}

	cout << que.front();

	return 0;
}

/*
#include <iostream>
#include <vector>

int findMax(const std::vector<int>& integers, int n) {
	// Base case: If there is only one integer in the list, return it.
	if (n == 1) {
		return integers[0];
	}

	// Recursive case: Find the maximum of the first n - 1 integers.
	int maxOfNMinus1 = findMax(integers, n - 1);

	// Compare the maximum of the first n - 1 integers with the last integer in the list.
	// Return the larger of the two.
	return std::max(maxOfNMinus1, integers[n - 1]);
}

int main() {
	std::vector<int> integers = { 12, 5, 7,42, 31, 17, 8};
	int n = integers.size();
	int max = findMax(integers, n);

	std::cout << "The maximum value in the list is: " << max << std::endl;

	return 0;
}*/
