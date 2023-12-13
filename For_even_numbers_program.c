#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter the value of n : \t");
    scanf("%d", &n);
    printf("The even numbers are : ");

    for (i = 1; i <= n; i++)
    {
        i++;
        printf("%d\t", i);
    }

    return 0;
}