#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
#include<math.h>
using namespace std;

void main()
{
	//freopen("input.txt", "rt", stdin);
	
	int n, p_num[1001] = {0, };
	scanf("%d", &n);

	int temp = 0, divisor = 2;
	for (int i = 2; i <= n; i++)
	{
		temp = i;
		while (temp != 1)
		{
			if (temp % divisor == 0)
			{
				p_num[divisor]++;
				temp = temp / divisor;
			}
			else
				divisor++;
		}
		divisor = 2;
	}

	printf("%d! = ", n);
	for (int i = 2; i <= 1000; i++)
	{
		if (p_num[i] != 0)
			printf("%d ",p_num[i]);
	}

}