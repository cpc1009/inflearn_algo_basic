/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n, m;
	int sum=0;
	scanf("%d %d", &n,&m);
	
	for (int i = 1; i <= n; i++) 
	{
		if (i % m == 0)
			sum += i;
	}

	printf("%d", sum);
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//using namespace std;

int reverse(int n)
{
	int result = 0;
	while (n > 0)
	{
		result = (result * 10) + (n % 10);
		n = n/10;
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
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int arr[3] = { 0,1,2 };

	printf("arr[1] = %d\n", arr[1]);
	printf("arr+4 = %d", *(arr + 1));

}*/