#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	int a[11], b[11];
	int a_score = 0, b_score=0,recent=0;

	for (int i = 1; i <= 10; i++)
		scanf("%d", &a[i]);

	for (int i = 1; i <= 10; i++)
		scanf("%d", &b[i]);
	
	for (int i = 1; i <= 10; i++)
	{
		if (a[i] > b[i])
		{
			a_score += 3;
			recent = 1;
		}
			
		else if (a[i] < b[i])
		{
			b_score += 3;
			recent = 2;
		}
			
		else
		{
			a_score++;
			b_score++;
		}
	}	

	printf("%d %d\n", a_score, b_score);
	if (a_score > b_score)
		printf("A");
	else if (b_score > a_score)
		printf("B");
	else
	{
		if (recent == 1)
			printf("A");
		else if (recent == 2)
			printf("B");
		else
			printf("D");
	}
}