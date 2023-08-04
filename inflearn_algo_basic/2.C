#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "w", stdout);

	int n, m;
	int sum = 0;
	scanf("%d %d", &n, &m);

	for (int i = n; i <= m; i++)
	{
		if (i != m)
			printf("%d + ", i);
		else
			printf("%d = ", i);
		sum += i;
	}

	printf("%d", sum);

}
