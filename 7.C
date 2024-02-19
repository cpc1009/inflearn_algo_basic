#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void main()
{
	//freopen("input.txt", "rt", stdin);

	char str[101];
	char res_str[101];
	int index = 0;
	gets(str);

	for (int i = 0; i < strlen(str); i++)
	{
		if (!(str[i] <= 122 && str[i] >= 97))
		{
			if (str[i] != ' ')
				res_str[index++] = str[i] + 32;
		}
		else
			res_str[index++] = str[i];
	}
	res_str[index] = NULL;
	printf("%s", res_str);
}