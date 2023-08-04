#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n,max=-1,cnt=1,temp,last;
	scanf("%d", &n);
	scanf("%d", &last);

	for (int i = 2; i <= n; i++)
	{
		scanf("%d", &temp);
		if (last <= temp)
			cnt++;
		else
			cnt = 1;
		if (max < cnt)
			max = cnt;
		last = temp;
	}
	printf("%d", max);
}