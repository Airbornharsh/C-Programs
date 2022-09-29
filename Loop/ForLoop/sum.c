#include <stdio.h>
int main()
{
    int a, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        sum += a;
        printf("%d",a);
    }
    printf("%d", sum);

    return 0;
}