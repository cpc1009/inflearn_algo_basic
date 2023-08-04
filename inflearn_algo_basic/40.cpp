#define _CRT_SECURE_NO_WARNINGS
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
