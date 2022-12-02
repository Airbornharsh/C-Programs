#include <stdio.h>

union two
{
    int x;
    char y;
};

int main()
{

    union two one;

    one.x = 38;
    printf("%d,%c", one.x, one.y);
}