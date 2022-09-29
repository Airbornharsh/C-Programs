#include <stdio.h>

int Sum(int a);

void main()
{
    int a;
    scanf("%d", &a);

    int k = Sum(a);
    printf("%d", k);
}

int Sum(int a)
{
    int v = 0;
    while (a > 0)
    {
        v += a % 10;
        a = a / 10;
    }
    return v;
}