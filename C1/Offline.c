#include <stdio.h>

int main()
{

    int a;
    scanf("%d", &a);
    if (a > 10)
    {
        if (a % 2 == 0)
        {
            printf("The Number is Even and Greater than 10");
        }
        else
        {
            printf("THe Number is Odd and Greater than 10");
        }
    }
    else
    {
        printf("The Number is Less than 10");
    }

    return 0;
}