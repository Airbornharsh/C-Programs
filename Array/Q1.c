#include <stdio.h>

int main()
{
    int no[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &no[i]);
    }
    int check = no[0];

    for (int i = 0; i < 10; i++)
    {
        if (check < no[i])
        {
            check = no[i];
        }
    }
    printf("%d", check);
}
