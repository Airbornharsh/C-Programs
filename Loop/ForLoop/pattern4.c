#include <stdio.h>
int main()
{
    int i, j;
    int k=1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}