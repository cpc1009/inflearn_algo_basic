/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	
	char str[101];
	int arr[2][53],flag =0;

	for (int i = 0; i <= 1; i++)
	{
		scanf("%s", str);
		for (int j = 0; j < strlen(str);j++)
		{
			if (str[j] <= 90 && str[j] >= 65)
				arr[i][str[j] - 65]++;
			else
				arr[i][str[j] - 71]++;
		}
	}

	for (int i = 0; i <= 52; i++)
	{
		if (arr[0][i] != arr[1][i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
		printf("NO");
	else
		printf("YES");
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[4] = "abc";
	char b[4] = "abc";
	char* d;
//	char * e = "abcd";
	int c = 3;
	int *p;

	p = &c;

	if(strcmp(a,b) == 0)
		printf("same\n");
	if (a == b)
		printf("same\n");
	scanf("%s", &d);
	printf("%s", d);
	printf("%p %p\n", p, &p);
	printf("%p %p", a, &a);
}
*/

/*
#include<stdio.h>
void change(int** pp1, int **pp2)
{
	int *temp;
	temp = *pp1;
	*pp1 = *pp2;
	*pp2 = temp;
}
void main()
{
	int a = 10, b = 20;
	int* p1 = &a, * p2 = &b;
	change(&p1, &p2);
	printf("%d %d", a, b);
}
*/
/*
#include<stdio.h>
void test(int *arr)
{
	for (int i = 0; i <= 2; i++)
		*(arr+i) += 1;
}


void  main()
{
	int arr[3] = { 1,2,3 };
	int* a = arr;
	char* ss[3] = { "abcd","a","bc" };
	char* s = "abcd";
	*(a + 0) = 5;
	test(arr);
	for (int i = 0; i <= 2; i++)
		printf("%d ", arr[i]);
}*/

/*
#include<stdio.h>
void test(int *a)
{
	*a =*a + 5;
}
void main()
{
	int aa = 3;
	printf("%d\n", aa);
	test(aa);
	printf("%d\n", aa);
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#define MIN(x, y) x < y ? x : y
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10] = "abc";
	char str2[10] = "abca";
	printf("%d\n", strcmp(str1, str2));
	printf("%d", MIN(3, 3));
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	char a = ' ';
	printf(" % c % d\n ", a, a);
}