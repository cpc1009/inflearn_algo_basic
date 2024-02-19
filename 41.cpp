/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    freopen("input.txt", "rt", stdin);
   
    int r_idx = 1, m_idx = 0, result[10] = { 0, }, temp = 0;
    char money[20];
 //   printf("input : ");
    scanf("%s", money);

    m_idx = strlen(money) % 3;
    
    if (m_idx > 0)
    {
        for (int i = 0; i <= m_idx - 1; i++)
            temp = temp * 10 + (money[i] - 48);

        result[r_idx++] = temp;
        temp = 0;
    }
   
    while (!(money[m_idx] == NULL))
    {
        for (int i = m_idx; i <= m_idx+2; i++)
            temp = temp * 10 + (money[i] - 48);

        result[r_idx++] = temp;
        temp = 0;
        m_idx+=3;
    }
    
  
    for (int i = 1; i < r_idx; i++)
    {
        if (i == 1 && r_idx >2)
            printf("%d,",result[i]);
        else if (i == 1)
            printf("%d", result[i]);
        else if (i == r_idx - 1)
            printf("%03d", result[i]);
        else
            printf("%03d,", result[i]);
    }
       
    return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(int n, vector<int> arr);

int cnt;

int main()
{
   // freopen("input.txt", "rt", stdin);
    
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = n / 2; i >= 1; i--)
    {
        int sum = i;
        arr.push_back(i);
        for (int j = i + 1; j <= n; j++)
        {
            sum += j;
            arr.push_back(j);
            if (sum == n)
                display(n, arr);
            else if (sum > n)
                break;
        }
        arr.resize(0);
    }
    cout << cnt;
    return 0;
}

void display(int n, vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (i == arr.size() - 1)
            cout << arr[i] << " ";
        else
            cout << arr[i] << " + ";
    }
    printf("= %d", n);
    cnt++;
    cout << endl;
}
*/

#include<stdio.h>
int main() {
    freopen("input.txt", "rt", stdin);
    int a, b = 1, cnt = 0, tmp, i;
    scanf("%d", &a);
    tmp = a;
    a--;
    while (a > 0) {
        b++;
        a = a - b;
        if (a % b == 0) {
            for (i = 1; i < b; i++) {
                printf("%d + ", (a / b) + i);
            }
            printf("%d = %d\n", (a / b) + i, tmp);
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
