#include <stdio.h>

int main()
{
    int given;
    printf("Enter your number : ");
    scanf("%d", &given);

    if (given % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}