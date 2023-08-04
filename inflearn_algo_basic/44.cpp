#include<stdio.h>

void main()
{
    printf("size? ");

    int size;
    scanf("%d", &size);

    int f = 1, b = size * 2;

    for (int i = 1; i <= size * 2 - 1; i++)
    {
        for (int j = 1; j <= size * 2; j++)
        {
            if (j > f && b > j)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
        if (i < size)
        {
            f++;
            b--;
        }
        else
        {
            f--;
            b++;
        }
    }
}
