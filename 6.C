#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void main()
{
	//freopen("input.txt", "rt", stdin);
	char str[51];
	int num = 0,cnt=0;

	scanf("%s", str);

	for (int i = 0; i <= strlen(str); i++)
	{
		if (str[i] <= 57 && str[i] >= 48)
			num = num * 10 + (str[i] - 48);
	}

	for (int i = 1; i <= num / 2; i++)
	{
		if (num % i == 0)
			cnt++;
	}
	printf("%d %d", num,cnt+1);
}