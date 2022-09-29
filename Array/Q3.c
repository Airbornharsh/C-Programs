#include <stdio.h>
int main()
{

    int NO[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &NO[i]);
    }

    int Sum = 0;

    for (int i = 0; i < 5; i++)
    {
        Sum += NO[i];
    }
    printf("%d", Sum);

    return 0;
}