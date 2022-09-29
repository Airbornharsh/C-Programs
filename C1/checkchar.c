#include <stdio.h>

int main()
{
    char s;
    scanf("%c", &s);
    if (s >= 'A' && s <= 'Z')
    {
        printf("The Character is Uppercase");
    }
    else if (s >= 'a' && s <= 'z')
    {
        printf("The Character is Lowercase");
    }

    return 0;
}