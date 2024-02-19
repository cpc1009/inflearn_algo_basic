#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
#include<math.h>
using namespace std;

void main()
{
	//freopen("input.txt", "rt", stdin);

	int n;
	scanf("%d", &n);

	int temp = 0,cnt1=0,cnt2=0;
	for (int i = 2; i <= n; i++)
	{
		temp = i;
		while (temp != 1)
		{
			if (temp % 2 == 0)
			{
				cnt1++;
				temp = temp / 2;
			}
			else if (temp % 5 == 0)
			{
				cnt2++;
				temp = temp / 5;
			}
			else break;
		}
	}

	if (cnt1 >= cnt2) printf("%d", cnt2);
	else printf("%d", cnt1);

}