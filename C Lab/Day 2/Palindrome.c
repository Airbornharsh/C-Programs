#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int m = n;
    int k = 0;
    while (m > 0)
    {
        k = k * 10 + m % 10;
        m /= 10;
    }

    if (n == k)
    {
        printf("%d is a Palindrome Nummber", n);
    }
    else
    {
        printf("%d is Not a Palindrome Nummber", n);
    }
}