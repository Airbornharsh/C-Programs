#include <stdio.h>

int main()
{
    int n[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", n[i]);
    }
}
