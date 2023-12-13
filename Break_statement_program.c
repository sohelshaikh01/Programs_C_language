#include <stdio.h>

void main()
{
    int i, n = 78;
    for (i = 10; i <= n; i++)
    {
        if (i == 15)
            break;
        printf("%d\n", i);
    }
    getch();
}