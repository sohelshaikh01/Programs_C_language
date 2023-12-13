#include <stdio.h>

int main()
{
    int n = 6, prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("This is not prime number");
    }
    else
    {
        printf("This is prime number");
    }
    return 0;
}