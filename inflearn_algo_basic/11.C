#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int extract(int n)
{
	int cnt = 0;

	while (n > 0)
	{
		n = n / 10;
		cnt++;
	}
	return cnt;
}
void main()
{
	//freopen("input.txt", "rt", stdin);

	int n,sum=0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) 
	{
		sum += extract(i);
	}
	printf("%d", sum);
}