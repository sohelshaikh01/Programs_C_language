#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, sum, sub, mul;
    float div;
    printf("Enter the value of a & b : ");
    scanf("%d%d", &a, &b);

    sum = a + b;
    printf("\nAddition of two num: %d", sum);

    sub = a - b;
    printf("\nSubtraction of two num: %d", sub);

    mul = a * b;
    printf("\nMultiplition of two num: %d", mul);

    div = a / b;
    printf("\nDivision of two num: %f", div);

    return 0;
}