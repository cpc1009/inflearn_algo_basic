#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
//	freopen("input.txt", "rt", stdin);
	
	int n,temp,pos=1,cnt=0;
	scanf("%d", &n);

	vector<int> Sequence(n + 1);
	fill(Sequence.begin(), Sequence.end(), 0);

	for (int i = 1; i <= n ; i++)
	{
		scanf("%d", &temp);
		while (1)
		{
			if (cnt == temp && Sequence[pos] == 0)
			{
				Sequence[pos] = i;
				pos = 1;
				cnt = 0;
				break;
			}
				
			if (Sequence[pos] == 0)
			{
				pos++;
				cnt++;
			}
			if (Sequence[pos] != 0)
				pos++;
		}
	}

	for (int i = 1; i <= n; i++)
		printf("%d ", Sequence[i]);
		
}