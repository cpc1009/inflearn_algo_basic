#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void main()
{
	//freopen("input.txt", "rt", stdin);

	int sum = 0;
	char str[31];
	gets(str);
	
	for (int i = 0; i < strlen(str); i++)
	{
		
		if (str[i] == '(')
			sum++;
		else
			sum--;

		if (sum < 0)
			break;
	}

	if (sum == 0)
		printf("YES");
	else
		printf("NO");
}