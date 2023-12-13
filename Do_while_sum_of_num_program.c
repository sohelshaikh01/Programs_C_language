#include <stdio.h>

void main()
{
    int i, sum = 0;
    i = 1;

    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("The sum of natural numbers is : %d", sum);

    getch();
}