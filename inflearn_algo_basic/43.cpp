/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<vector>
//#include<algorithm>

using namespace std;
int Min, temp;
int n_song, n_cd;

void ref(int start, int point, int remain, vector<int> & arr_cd,vector<int> & arr_song,int Max)
{
	printf("%d %d %d %d %d\n", start, point, remain, Max, Min);
	for (int i = start; i <=point; i++)
	{
		temp += arr_song[i];
	}

	if (Max < temp)
		Max = temp;

	temp = 0;
	printf("M = %d\n", Max);

	if (remain == 0)
	{
		if (Min > Max)
			Min = Max;
		return;
	}

	else if (remain == 1)
	{
		ref(point + 1,n_song-1, remain - 1, arr_cd, arr_song,Max);
	}

	else
	{
		for (int i = point + 1; i <=n_song - remain; i++)
		{
			ref(point+1, i,remain-1, arr_cd, arr_song,Max);
		}
	}
}
void main()
{
	freopen("input.txt", "rt", stdin);

	scanf("%d %d", &n_song, &n_cd);

	vector<int> arr_song(n_song);
	vector<int> arr_cd(n_cd);

	for (int i = 0; i < n_song; i++)
	{
		scanf("%d", &arr_song[i]);
		Min += arr_song[i];
	}
	
	for (int i = 0; i <=n_song - n_cd; i++)
	{
		printf("----------- %d -------------\n", i);
		ref(0, i, n_cd-1, arr_cd, arr_song,0);
	
	}

	printf("%d", Min);
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;
int a[1001], n;

int Count(int s) {
	int i, cnt = 1, sum = 0;
	for (i = 1; i <= n; i++) {
		if (sum + a[i] > s) {
			cnt++;
			sum = a[i];
		}
		else {
			sum = sum + a[i];
		}
	}
	return cnt;
}

int main() {
	freopen("input.txt", "rt", stdin);
	int m, i, lt = 1, rt = 0, mid, res;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		rt = rt + a[i];
	}
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		//printf("st = %d // end = %d // mid = %d\n", lt,rt,mid);
		if (Count(mid) <= m) {
			res = mid;
			rt = mid - 1;
		}
		else {
			lt = mid + 1;
		}
	}
	printf("%d\n", res);
	return 0;
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int n_cd, n_song;

int count(int n,vector<int>arr)
{
	int temp = 0,cnt=1;
	for (int i = 1; i <= n_song; i++)
	{
		if (temp + arr[i] > n)
		{
			cnt++;
			temp = arr[i];
		}
		else
			temp += arr[i];
	}
	return cnt;
}

void main()
{
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n_song, &n_cd);

	vector<int> arr_song(n_song+1);
	int start = 1, end = 0;

	for (int i = 1; i <= n_song; i++)
	{+
		scanf("%d", &arr_song[i]);
		end += arr_song[i];
	}
	//printf("end = %d\n", end);

	int mid = 0,result=0;

	while (start <= end)
	{
		mid = (start + end) / 2;
		//printf("mid = %d\n", mid);
		if (count(mid,arr_song) <= n_cd)
		{
			result = mid;
			end = mid - 1;
		}

		else
			start = mid + 1;
	}

	printf("%d", result);
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

using namespace std;

int count(int comp, vector<int> arr);
int n_song, n_cd;

void main()
{
	freopen("input.txt", "rt", stdin);
	int p_left = 1, p_right = 0,p_mid=0;

	cin >> n_song >> n_cd;

	vector<int> arr(n_song+1);

	for (int i = 1; i <= n_song; i++)
	{
		cin >> arr[i];
		p_right += arr[i];
	}


	int result = 0;
	while (p_left <= p_right)
	{
		p_mid = (p_left + p_right) / 2;
		if (count(p_mid, arr) > n_cd)
			p_left = p_mid + 1;
		else
		{
			p_right = p_mid - 1;
			result = p_mid;
		}
		cout << p_mid << endl;
	}
	cout << result << endl;
}

int count(int comp, vector<int> arr)
{
	int sum = 0, cnt = 1;
	for (int i = 1; i <= n_song; i++)
	{
		
		if (sum + arr[i] > comp)
		{
			cnt++;
			sum = arr[i];
		}
		else
			sum += arr[i];
	}
	return cnt;
}
*/


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

using namespace std;

void b_search(int front, int back, vector<int> arr);
bool count(int time, vector<int> arr);

int devide,Max=0;

int main()
{
	freopen("input.txt", "rt", stdin);

	int n,back=0;
	cin >> n >> devide;

	vector<int> arr(1);

	int temp;

	for (int i = 1; i <= n; i++)
	{
		
		cin >> temp;
		back += temp;
		arr.push_back(temp);
	}
		
	b_search(arr[1],back, arr);

	return 0;
}

void b_search(int front, int back,vector<int> arr)
{
	int time = (front + back) / 2;

	//cout << "f: " << front << "	b: " << back << " t: " << time << endl;
	
	if (!(front <= back))
		cout << Max;
	else if (count(time, arr) == true)
		b_search(front, time - 1, arr);
	else
		b_search(time + 1, back, arr);
}


bool count(int time, vector<int> arr)
{
	int cnt = 1, sum = 0;;
	for (int i = 1; i < arr.size(); i++)
	{
		if (sum + arr[i] <= time)
			sum += arr[i];
		else
		{
			cnt++;
			sum = arr[i];
		}
	}

	if (cnt > devide)
		return 0;
	Max = time;
	return 1;
}