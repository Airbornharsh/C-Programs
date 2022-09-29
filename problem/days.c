#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number beetween 1-7 \n");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("Monday"); 
    }
    else if (day == 2)
    {
        printf("Tuesday");
    }
    else if (day == 3)
    {
        printf("Wednesday");
    }
    else if (day == 4)
    {
        printf("Thursday");
    }
    else if (day == 5)
    {
        printf("Friday");
    }
    else if (day == 6)
    {
        printf("saturday");
    }
    else if (day == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Please enter a number between 1-7");
    }
    return 0;
}