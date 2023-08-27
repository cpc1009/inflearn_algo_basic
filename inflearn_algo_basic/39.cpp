/*#define _CRT_SECURE_NO_WARNINGS
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
	freopen("input.txt", "rt", stdin);

	int n1, n2, p1 = 1, p2 = 1;
	
	scanf("%d", &n1);
	vector<int> arr1(n1 + 2);
	for (int i = 1; i <= n1; i++)
		scanf("%d", &arr1[i]);

	scanf("%d", &n2);
	vector<int> arr2(n2 + 2);
	for (int i = 1; i <= n2; i++)
		scanf("%d", &arr2[i]);
	
	vector<int> result(n1 + n2 +1);

	for (int i = 1; i <= n1 + n2; i++)
	{
		if (arr1[p1] > arr2[p2])
			result[i] = arr2[p2++];
		else
			result[i] = arr1[p1++];

		if (p1 > n1)
			arr1[--p1] = 101;
		if (p2 > n2)
			arr2[--p2] = 101;
	}
	for (int i = 1; i <= n1+n2; i++)
		printf("%d ", result[i]);
}*/

/*
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int a[101], b[101], c[300];
int main() {
	freopen("input.txt", "rt", stdin);
	int n, m, i, p1 = 1, p2 = 1, p3 = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) 
		scanf("%d", &a[i]);
	
	scanf("%d", &m);
	for (i = 1; i <= m; i++) 
		scanf("%d", &b[i]);
	
	while (p1 <= n && p2 <= m)
	{
		if (a[p1] < b[p2])
			c[p3++] = a[p1++];
		else 
			c[p3++] = b[p2++];
	}

	while (p1 <= n) c[p3++] = a[p1++];
	while (p2 <= m) c[p3++] = b[p2++];

	for (i = 1; i < p3; i++) 
		printf("%d ", c[i]);

	return 0;
}*/

