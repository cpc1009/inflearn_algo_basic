#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
using namespace std;
void main()
{
	//freopen("input.txt", "rt", stdin);
	int n, m;
	scanf("%d %d", &n, &m);

	int time=0,l_time=-1, now, last = 0;

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &now);
		if (now > m)
			time++;
		else time = 0;

		if (time >= l_time)
			l_time = time;
	}
	printf("%d", l_time);
}
