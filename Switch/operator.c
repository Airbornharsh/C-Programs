#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);

    switch (c)
    {
    case '+':
        printf("Plus");
        break;
    case '-':
        printf("Minus");
        break;
    case '*':
        printf("Multiply");
        break;
    case '/':
        printf("Divide");
        break;
    case '&':
        printf("Bitwise AND");
        break;
    case '|':
        printf("Bitwise OR");
        break;
    case '^':
        printf("Bitwise XOR");
        break;
    case '~':
        printf("Bitwise Compliment");
        break;
    case '%':
        printf("Modulus");
        break;
    case '#':
        printf("Hash");
        break;
    case '@':
        printf("At the Rate");
        break;
    case '=':
        printf("Assignment");
        break;
    case '>':
        printf("Greater Than");
        break;
    case '<':
        printf("Less Than");
        break;
    case '_':
        printf("UnderScore");
        break;

    default:
        printf("Enter a Valid character");
    }
    return 0;
}