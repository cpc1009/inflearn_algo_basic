#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int decide_p_num(int n)
{
	for (int i = 2; i*i <= n ; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void main()
{
	//freopen("input.txt", "rt", stdin);
	
	int n,cnt=0;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		if (decide_p_num(i) == 1)
			cnt++;
	}
	printf("%d", cnt);
}