#include <stdio.h>

void Get(char *S, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &S[i]);
    }
}

void Put(char *S, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", S[i]);
    }
}

void main()
{
    int n = 5;
    char S[5] = {2, 3, 4, 2, 3};

    Get(S, n);
    Put(S, n);
}