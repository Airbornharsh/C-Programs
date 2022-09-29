#include <stdio.h>

int main() 
{

    int a = 5,b=6;
    a= a^b;
    b= b^a;
    a= b^a;

    printf("%d %d", a ,b);

    return 0;
}