#include <stdio.h>

int main()
{

    int a;

    scanf("%d", &a);

    int n = 0;
    while (a > 0)
    {
        n = n * 10 + a % 10;
        a = a / 10;
    }

    printf("Reverse Number is %d", n);
}