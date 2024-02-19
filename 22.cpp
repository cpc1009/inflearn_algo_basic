//Time limit error
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);

	int n, k, sum = 0, max;
	int *arr;
	scanf("%d %d", &n, &k);

	max = k * (-100) - 1;

	arr = (int*)malloc(sizeof(int) * (n + 1));

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);
	for (int i = 1; i <= n-k+1; i++)
	{
		for (int j = 0; j < k; j++)
			sum += arr[i + j];
		if (sum > max)
			max = sum;
		sum = 0;
		
	}
	printf("%d", max);
}*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n, k, sum = 0, max, first, last;
	int* arr;
	scanf("%d %d", &n, &k);

	arr = (int*)malloc(sizeof(int) * (n + 1));

	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= k; i++)
	{
		first = 1;
		last = k + 1;
		sum += arr[i];
	}
	max = sum;

	for (int i = 2; i <= n-k+1; i++)
	{
		sum = sum - arr[first] + arr[last];
		first++;
		last++;
		if (max < sum)
			max = sum;
	}
	printf("%d", max);
}
