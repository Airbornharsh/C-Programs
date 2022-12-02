#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'k';
    FILE *fptr;
    fptr = fopen("./write.txt", "w");

    if (fptr == NULL)
    {
        printf("Null");
        exit(0);
    }

    fprintf(fptr, "%c", c);
    fclose(fptr);
}