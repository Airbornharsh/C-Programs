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

    int sum[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }
}