#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the last number n : ");
    scanf("%d", &n);
    printf("The natural numbers are : \n");

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("\n The sum of natural numbers %d", sum);
    return 0;
}