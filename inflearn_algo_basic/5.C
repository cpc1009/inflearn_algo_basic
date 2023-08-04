#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void main()
{
	//freopen("input.txt", "rt", stdin);

	char ss_num[16];
	scanf("%s", ss_num);


	if (ss_num[7] - 48 == 3 || ss_num[7] - 48 == 4)
	{
		printf("%d ", 2019-(2000 + (((ss_num[0] - 48) * 10) + (ss_num[1] - 48)))+1);
		if (ss_num[7]-48 == 3)
				printf("M");
		else
			printf("W");
	}
	else
	{
		printf("%d ", 2019 - (1900 + (((ss_num[0] - 48) * 10) + (ss_num[1] - 48)))+1);
		if (ss_num[7]-48 == 1)
			printf("M");
		else
			printf("W");
	}
	
}

