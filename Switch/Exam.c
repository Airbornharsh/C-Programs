#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);

    switch (n)
    {

    case 'O':
        printf("Outstanding");
        break;
    case 'E':
        printf("Excellent");
        break;
    case 'A':
        printf("VerycGood");
        break;
    case 'B':
        printf("Good");
        break;
    case 'C':
        printf("Average");
        break;
    case 'D':
        printf("Just Passed");
        break;
    case 'F':
        printf("Fail");
        break;

    default:
        printf("Enter a Valid character");
    }

    return 0;
}