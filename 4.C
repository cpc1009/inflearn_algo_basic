#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	//freopen("input.txt", "rt", stdin);

	int n, temp;
	int min = 999, max = -1;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &temp);
		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
	//	printf("%d %d\n", max, min);
	}
	printf("%d", max - min);
}

