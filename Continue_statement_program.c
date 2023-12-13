#include <stdio.h>

void main()
{
    int i, n = 25;
    for (i = 10; i <= n; i++)
    {
        if (i == 15)
            continue;
        // This skip the condition
        printf("%d\n", i);
    }
    getch();
}