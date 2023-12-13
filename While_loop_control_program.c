#include <stdio.h>

void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    while (a < 10)
    {
        printf("\ni : %d", a);
        a++;
    }

    getch();
}