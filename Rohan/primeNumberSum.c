// #include <stdio.h>

// void restCheckPrime(int n, int divisible, int maxDivisible, int *check)
// {

//     if (n % divisible == 0)
//     {
//         if (maxDivisible == 1)
//         {
//             *check = 0;
//             return;
//         }
//         maxDivisible--;
//     }
//     restCheckPrime(n, divisible - 1, maxDivisible, &*check);
// }

// int isPrimeNumber(int n)
// {
//     if (n == 2)
//     {
//         return 1;
//     }

//     if (n % 2 == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         int check = 1;
//         restCheckPrime(n, n, 2, &check);
//         return check;
//     }
// }

// int primeSum(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     int k = primeSum(n - 1);

//     if (isPrimeNumber(n) == 1)
//     {
//         return n + k;
//     }
//     else if (isPrimeNumber(n) == 0)
//     {
//         return k;
//     }
// }

// int main()
// {
//     printf("%d", primeSum(2));
// }

#include <stdio.h>

int check(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int k = n;
    int m = 2;
    while (m > 0)
    {
        if (n % k == 0)
        {
            m--;
        }
        if (k == 1)
        {
            return 1;
        }
        k--;
    }
    return 0;
}

int main()
{
    int n = 7;
    int k = 0;
    while (n > 0)
    {
        if (check(n) == 1)
        {
            k += n;
        }
        n--;
    }

    printf("%d", k);
}