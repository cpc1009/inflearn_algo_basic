/*#define _CRT_SECURE_NO_WARNINGS
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
//	freopen("input.txt", "rt", stdin);

	int n1, n2, p1 = 1, p2 = 1,cnt=1;

	scanf("%d", &n1);
	vector<int> arr1(n1 + 1);
	for (int i = 1; i <= n1; i++)
		scanf("%d", &arr1[i]);

	scanf("%d", &n2);
	vector<int> arr2(n2 + 1);
	for (int i = 1; i <= n2; i++)
		scanf("%d", &arr2[i]);

	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	vector<int>result(n1 + n2 + 1);

	while (p1<=n1 && p2<=n2)
	{
		if (arr1[p1] > arr2[p2])
			p2++;
		else if (arr1[p1] < arr2[p2])
			p1++;
		else
		{
			result[cnt] = arr1[p1];
			p1++;
			p2++;
			cnt++;
		}
	}
	
	for (int i = 1; i <= cnt-1; i++)
		printf("%d ", result[i]);
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
	//freopen("input.txt", "rt", stdin);

	int n1, n2;
	cin >> n1;
	vector<int> arr1(n1 + 1);
	
	for (int i = 1; i <= n1; i++)
		cin >> arr1[i];

	cin >> n2;
	vector<int> arr2(n2 + 1);
	vector<int> arr_result(n1 + n2 + 1);
	for (int i = 1; i <= n2; i++)
		cin >> arr2[i];

	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	int p1 = 1, p2 = 1,i=1;

	while (n1 >= p1 && n2 >= p2)
	{
		if (arr1[p1] == arr2[p2])
			arr_result[i++] = arr1[p1];

		if (arr1[p1] > arr2[p2])
			p2++;
		else
			p1++;
	}

	for (int j = 1; j <= i-1; j++)
		cout << arr_result[j] << " ";

	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n1, n2;

	cin >> n1;
	vector<int> arr1(n1 + 1);
	for (int i = 1; i <= n1; i++)
		cin >> arr1[i];

	cin >> n2;
	arr1.resize(n1 + n2 + 1);

	int temp, j;

	for (int i = 1; i <= n2; i++)
	{
		cin >> temp;
		for (j = n1; j >= 1; j--)
		{
			if (arr1[j] > temp)
				arr1[j + 1] = arr1[j];
			else break;
		}
		arr1[j + 1] = temp;
		n1++;
	}

	for (j = 1; j <= n1; j++)
		printf("%d ", arr1[j]);
	return 0;
}
