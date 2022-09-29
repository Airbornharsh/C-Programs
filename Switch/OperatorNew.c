#include <stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%c", &c);
    scanf("%d", &a);
    scanf("%d", &b);

    switch (c)
    {
    case '+':
        printf("Result is %d", a + b);
        break;
    case '-':
        printf("Result is %d", a - b);
        break;
    case '*':
        printf("Result is %d", a * b);
        break;
    case '/':
        printf("Result is %d", a / b);
        break;
    case '%':
        printf("Result is %d", a % b);
        break;
    default:
        printf("Enter a Valid character");
    }
    return 0;
}