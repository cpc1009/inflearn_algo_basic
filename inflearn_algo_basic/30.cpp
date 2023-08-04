#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
#include<math.h>
using namespace std;

void main()
{
	//freopen("input.txt", "rt", stdin);
	int n,cnt =0,temp,ten=1,digit=0,last=0;
	scanf("%d", &n);

	while (n>0)
	{
		temp = n % 10;
		cnt += (temp * (ten / 10)) * digit;

		if (temp > 3)
			cnt += ten;
		else if (temp == 3)
			cnt += last + 1;

		last += temp * ten;
		n = n / 10;
		digit++;
		ten *= 10;
	}
	printf("%d", cnt);
}