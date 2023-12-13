#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter values of a,b : ");
    scanf("%d,%d", &a, &b);

    if (a > b)
    {
        printf("It is true");
    }
    else
    {
        printf("It is false");
    }
    return 0;
}