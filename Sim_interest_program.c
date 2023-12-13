#include <stdio.h>

int main()
{
    int p, r, n;
    float si;

    printf("Enter value of P,R,N: ");
    scanf("%d %d %d", &p, &r, &n);

    si = p * r * n / 100;
    printf("Simple interest is : %f", si);

    return 0;
}