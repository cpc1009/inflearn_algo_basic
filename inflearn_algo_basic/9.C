#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int divisor(int n)
{
	int cnt = 2;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			cnt++;
	}
	return cnt;
}

void main()
{
	//freopen("input.txt", "rt", stdin);
	
	int n;
	scanf("%d", &n);

	printf("1 ");
	for (int i = 2; i <= n; i++)
		printf("%d ", divisor(i));

}