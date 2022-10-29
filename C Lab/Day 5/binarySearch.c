#include <stdio.h>

int main()
{
    int array[10] = {4, 5, 9, 13, 23, 35, 56, 78, 90, 108}, n;

    printf("Enter a Number To search \n");
    scanf("%d", &n);

    int min, max, mid, k = 0;
    min = 0;
    max = 9;
    int l = 10;
    while (array[mid] != n)
    {
        mid = (min + max) / 2;
        if (n > array[mid])
        {
            min = mid;
        }
        else if (n < array[mid])
        {
            max = mid;
        }
        else
        {
            k = 1;
            break;
        }
    }

    k == 1 ? printf("%d", mid) : printf("Not Found");

    return 0;
}