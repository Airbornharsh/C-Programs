#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int arr[n], s = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    printf("Average is %d", s / n);
}