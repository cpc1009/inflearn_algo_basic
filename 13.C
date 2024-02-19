#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	//freopen("input.txt", "rt", stdin);
	char str[101];
	int memo[10]={0,}, max = -1,res;

	gets(str);

	for (int i = 0; i < strlen(str); i++)
		memo[str[i] - 48]++;

	for (int i = 0; i <= 9; i++)
	{
		if (max <= memo[i])
		{
			max = memo[i];
			res = i;
		}
			
	}
	printf("%d", res);

}
