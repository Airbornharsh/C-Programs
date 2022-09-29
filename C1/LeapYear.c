#include <stdio.h>

int main()
{

  int a;

  printf("Enter a Year\n");

  scanf("%d", &a);

  if (a % 400 == 0)
  {
    printf("Year Is A Leap Year");
  }
  else
  {
    if (a % 4 == 0 && a % 100 != 0)
    {
      printf("Year is A Leap Year");
    }
    else
    {
      printf("Year is Not A Leap Year");
    }
  }

  return 0;
}
