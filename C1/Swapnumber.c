#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    int temp = a;
    a = b;
    b = temp;

    printf("A is %d\n", a);
    printf("B is %d", b);

    return 0;
}