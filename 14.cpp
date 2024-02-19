#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
using namespace std;

int reverse(int n)
{
	int result = 0;
	while (n > 0)
	{
		result = (result * 10) + (n % 10);
		n = n / 10;
	}

	return result;
}

void isPrime(int temp)
{
	int n = reverse(temp);
	//printf("=%d=\n", n);
	if (n == 1)
		return;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return;
	}
	printf("%d ", n);
}

void main()
{
	//freopen("input.txt", "rt", stdin);

	int n, temp;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &temp);
		isPrime(temp);
	}
}