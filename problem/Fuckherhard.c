#include <stdio.h>
int main()
{
    int a, b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float d = a/b;
    switch (c)
    {
    case 1:
        printf("The addition of %d and %d is %d", a, b, a + b);
        break;
    case 2:
        printf("The substraction of %d and %d is %d", a, b, a - b);
        break;
    case 3:
        printf("The multiplication of %d and %d is %d", a, b, a * b);
        break;
    case 4:
        printf("The division of %d and %d is %f", a, b, d);
        break;
    }
    return 0;
}