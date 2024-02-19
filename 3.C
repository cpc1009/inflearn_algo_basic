#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	int sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			if (i < n / 2)
				printf("%d + ", i);
			else
				printf("%d = ", i);
			sum += i;
		}
	}
	printf("%d", sum);
}
