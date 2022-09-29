#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is Greater", a);
    }
    else if (a < b)
    {
        printf("%d is Greater", b);
    }
    else
    {
        printf("Numbers Are Equal");
    }
}