#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);

	int n, num, ans,sum=0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &num, &ans);
		for (int i = 1; i <= num; i++)
			sum += i;

		if (sum == ans)
			printf("YES\n");
		else
			printf("NO\n");
		sum = 0;
	}
}