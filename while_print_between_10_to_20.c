#include <stdio.h>

int main()
{
    int i = 0;
    printf("value of i : ");
    scanf("%d", &i);
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("value of i : %d\n", i);
            i++;
        }
    }
}