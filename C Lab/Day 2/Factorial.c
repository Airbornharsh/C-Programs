#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int m = n;
    int k = 1;
    while (m > 0 || m != 0)
    {
        k *= m;
        m -= 1;
    }

    printf("Factorial of %d is %d", n, k);
}