#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int m1[n][n], m2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    int mul[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int m = n, s = 0;
            while (m > 0)
            {
                s += m1[i][m - 1] * m2[m - 1][j];
                m--;
            }
            mul[i][j] = s;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}