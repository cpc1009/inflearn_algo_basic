#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int extract(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += (n % 10);
		n = n / 10;
	}
	return sum;
}

void main()
{
	//freopen("input.txt", "rt", stdin);

	int n, temp,max=-1,cmp,result=0;
	scanf("%d",&n);

	for (int i=1; i <= n; i++) 
	{
		scanf("%d", &temp);
		cmp = extract(temp);
		if (max < cmp)
		{
			max = cmp;
			result = temp;
		}
		else if (max == cmp)
		{
			if (temp > result)
				result = temp;
		}
	}
	printf("%d", result);
}