// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
    
//     int a=1;
//     while (a<=n)
//     {
//         printf("%d\n",a);
//         a++;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
   int i=1;
   int n;
   int sum = 0;
   scanf("%d", &n);
   while (i <= n)
   {
      sum = sum + i;
      i++;
   }
   printf("the sum is %d", sum);
   return 0;
}