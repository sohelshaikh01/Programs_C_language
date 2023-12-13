#include <stdio.h>

void main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        {
            sum = sum + i;
            printf("%d\t", i);
        }
        if (i == 5)
        {
            goto next;
        }
    next:
    {
        printf("%d\n", sum);
    }
    }
    getch();
}