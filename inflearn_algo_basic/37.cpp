#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
int check(int cmp,int *arr,int size)
{
	for (int i = 1; i <= size; i++)
	{
		if (arr[i] == cmp)
			return i;
	}
	return 0;
}
void move(int temp, int last,int *arr)
{
	int pot,i;
	for (i = last; i >= 2; i--)
		arr[i] = arr[i - 1];
	arr[i] = temp;
}
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n, size, temp,*arr,flag=0;
	scanf("%d %d", &size, &n);
	int b[10] = { 0, };

	arr = (int*)malloc(sizeof(int) * (n + 1));
	memset(arr, 0, sizeof(int) * (n + 1));

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &temp);
		if (check(temp, arr, size) > 0)
			move(temp, check(temp, arr, size), arr);
		else
		{
			for (int j = 1; j <= n-1; j++)
			{
				if (arr[j] == 0 || j == (n-1))
				{
					move(temp, j + 1, arr);
					break;
				}
			}
		}
	}
	for (int i = 1; i <= size; i++)
		printf("%3d ", arr[i]);
}

/*
#include <stdio.h>
int C[20];
int main() {
	freopen("input.txt", "rt", stdin);
	int s, n, a, i, j, pos;
	scanf("%d %d", &s, &n);
	for (i = 1; i <= n; i++) 
	{
		scanf("%d", &a);
		pos = -1;
		for (j = 0; j < s; j++) 
			if (C[j] == a) pos = j;
		if (pos == -1) 
		{
			for (j = s - 1; j >= 1; j--) 
				C[j] = C[j - 1];
		}
		else {
			for (j = pos; j >= 1; j--) 
				C[j] = C[j - 1];
		}
		C[j] = a;
	}
	for (i = 0; i < s; i++) 
		printf("%d ", C[i]);
	return 0;
}
*/

/*   Programming Assignment 10    */
/*   22200252,   RYu, Da-Eun   */

#include <stdio.h>

int main(void) {
	int y = 0, m = 0;
	int mm[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int t = 0;

	printf("달력을 출력하고 싶은 년도와 달을 입력해 주세요.(ex. 2022 10): ");
	scanf("%d %d", &y, &m);

	if (y < 1900) {
		printf("1900년도 부터 입력 가능합니다. 입력하신 숫자를 다시 한 번 확인해 주세요.");
	}
	else {
		if (m > 12 || m < 1) {
			printf("입력하신 숫자를 다시 한 번 확인해 주세요.");
		}
		else {
			for (int i = 1900; i < y; i++) {
				if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) { //윤년
					t = t + 366;
				}
				else { //평년
					t = t + 365;
				}
			}
		}
	}

	for (int i = 0; i < m - 1; i++)
		t = t + mm[i];

	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		if (m > 2)
			t = t + 1;
	}

	printf("%d", t);

	int sd = (t % 7) + 1;
	if (sd == 7)
		sd = 0;


	int ld = mm[m - 1];

	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		ld = ld + 1;



	printf("Sun    Mon    Tue    Wed    Thu    Fri    Sat\n");

	for (int i = 0; i < sd; i++) {
		printf("       ");
	}

	for (int j = 1; j <= ld; j++) {
		if (j >= 10) {
			printf(" %d    ", j);
		}
		else {
			printf("  %d    ", j);
		}
		if ((j + sd) % 7 == 0) {
			printf("\n");
		}
	}



	return 0;
}