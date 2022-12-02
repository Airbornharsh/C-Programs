#include <stdio.h>

int removeChar(char *s, int a, int b,int n)
{
    if (b > n)
    {
        return 0;   
    }

    if (s[a] == s[b])
    {
        removeChar(s, a, b + 1,n);
        return b;
    }
    else
    {
        printf("%c", s[a]);
        removeChar(s, b, b,n);
        return 0;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    char s[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &s[i]);
    }

    removeChar(s, 0, 0,n);

    return 0;
}