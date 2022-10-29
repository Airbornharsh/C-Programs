#include <stdio.h>

int main()
{

    int a;

    scanf("%d", &a);

    int n = 0;
    while (a > 0)
    {
        n = n + a % 10;
        a = a / 10;
    }

    printf("Sum of digits is %d", n);
}