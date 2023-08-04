/*#define _CRT_SECURE_NO_WARNINGS
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void main()
{
	//	freopen("input.txt", "rt", stdin);


}
*/
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
#include <stdio.h>

int main(void)
{
    int m;
    printf("Enter the output mode of the multiplication table (1: Odd, 2: Even). ");
    scanf("%d", &m);

    for (int i = 2; i <= 9; i++)
    {
        if ((i % 2 == 0) && (m == 2))
        {
            for (int j = 1; j <= 9; j++)
            {
                printf("%d X %d = %2d    ", i, j, i * j);
                if (j % 3 == 0)
                    printf("\n");
            }
            printf("\n");
        }

        else if ((i % 2 == 1) && (m == 1))
        {
            for (int j = 1; j <= 9; j++)
            {
                printf("%2d X %d = %2d    ", i, j, i * j);
                if (j % 3 == 0)
                    printf("\n");
            }
        }
       
    }

}*/

#define _CRT_SECURE_NO_WARNINGS
/*void main()
{
    for (int i = 0; i < -5; i++)
        printf("%d\n", i);
}*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int cnt = 0, idx[100] = { 0, };
    char compare[100];
    char names[13][100] = { "Global Leadership School",
                           "International Studies, Languages and Literature",
                           "Management and Economics",
                           "Law",
                           "Counseling Psychology and Social Welfare",
                           "Communication Arts",
                           "Spatial Environment System Engineering",
                           "Mechanical and Control Engineering",
                           "Contents Convergence Design",
                           "Life Science",
                           "Computer Science and Electrical Engineering",
                           "Global Entrepreneurship and ICT",
                           "Creative Convergence Education" };

    printf("Input >> ");
    scanf("%s", compare);

    if (strlen(compare) <= 3)
        printf("Enter more than 2 letters.\n");
    else
    {
        for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++)
        {
            for (int j = 0; j < (int)(strlen(names[i]) - strlen(compare) + 1); j++)
            {
                if (names[i][j] == compare[0])
                {
                    for (int k = 1; j < strlen(compare); k++)
                    {
                        if (names[i][j + k] != compare[k])
                        {
                            j = j + (k - 1);
                            break;
                        }
                        else if (k == strlen(compare) - 1)
                        {
                            idx[cnt] = i;
                            j = j + k;
                            cnt++;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < cnt; i++)
            printf("[%s]\n", names[idx[i]]);
        printf("%d major found\n", cnt);
    }

    return 0;
}