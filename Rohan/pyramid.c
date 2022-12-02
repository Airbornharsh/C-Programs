#include <stdio.h>

void pyramid(int n)
{
    int m = n;
    while (m > 0)
    {
        for (int i = m; i > 0; i--)
        {
            printf(" ");
        }
        for (int i = 1; i <= (n - m) * 2 + 1; i++)
        {

            if (i == 1 || i == (n - m) * 2 + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        m--;
    }
    m = 0;
    while (m <= n)
    {
        for (int i = m; i > 0; i--)
        {
            printf(" ");
        }
        for (int i = (n - m) * 2 + 1; i >= 1; i--)
        {
            if (i == 1 || i == (n - m) * 2 + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        m++;
    }
}

int main()
{
    pyramid(600);
}
