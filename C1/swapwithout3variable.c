#include <stdio.h>

int main()
{
    int a = 5, b = 10;
   a=a+b;
   b=a-b;
   a=a-b;

    printf("A is %d\n", a);
    printf("B is %d", b);

    return 0;
}