#include <stdio.h>

void main()
{
    int i;
    i = 1;

    while (i < 10)
    {
        printf("\ni : %d", i);
        i++;
    }

    getch();
}