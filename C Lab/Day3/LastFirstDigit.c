#include <stdio.h>

int main()
{
    int a;

    printf("Enter a Alphabet");
    scanf("%d", &a);

    int lastDigit = a % 10;

    int n = 0;
    while (a > 0)
    {
        n = n * 10 + a % 10;
        a = a / 10;
    }

    int firstDigit = n % 10;

    printf("First Digit is %d and Last Digit is %d", firstDigit, lastDigit);
}