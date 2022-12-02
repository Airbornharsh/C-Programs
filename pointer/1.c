#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 4;
    int *ptr = &a;

    printf("%d", *ptr);
}