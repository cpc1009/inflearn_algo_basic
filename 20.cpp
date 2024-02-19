#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n;
	int* a, * b;

	scanf("%d", &n);
	a = (int*)malloc(sizeof(int) * (n + 1));
	b = (int*)malloc(sizeof(int) * (n + 1));

	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	for (int i = 1; i <= n; i++)
		scanf("%d", &b[i]);

	for (int i = 1; i <= n; i++)
	{
		if (a[i] - b[i] == 0)
			printf("D\n");
		else if (a[i] - b[i] == 1 || a[i] - b[i] == -2)
			printf("A\n");
		else
			printf("B\n");
	}
}