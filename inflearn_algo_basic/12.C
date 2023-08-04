#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main()
{
	//freopen("input.txt", "rt", stdin);

	int n, sum = 0,std=9,val=1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i < std)
			sum += val;
		else if (i == std)
		{
			sum += val;
			std = std * 10 + 9;
			val++;
		}
	}
	printf("%d", sum);
}