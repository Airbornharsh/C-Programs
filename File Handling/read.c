#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE *fptr;
    fptr = fopen("./write.txt", "r");

    if (fptr == NULL)
    {
        printf("Null");
        exit(0);
    }

    fscanf(fptr, "%c", &c);
    printf("%c", c);
    fclose(fptr);
}