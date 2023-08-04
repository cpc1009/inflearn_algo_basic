#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
#include<math.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	char str[203];
	int w,n=0,ten=10,result=0;
	gets_s(str);

	if (str[1] == 'H')
		n = 1;
	for(int i = 0; i <strlen(str); i++)
	{
		if (str[i] <= 57 && str[i] >= 48)
			n = (n * ten) + (str[i] - 48);
		else if (str[i] == 'C')
			w = 12;
		else
		{
			result += (n * w);
			n = 0;
			ten = 10;
			w = 1;
			if (str[strlen(str) - 1] == 'H')
				n = 1;
		}
	}
	result += n * w;
	printf("%d", result);
}