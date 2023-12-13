#include <stdio.h>
#include <conio.h>

void main()
{
    int i, sum = 0;
    int n[5] = {1, 4, 17, 26, 39};

    for (i = 0; i <= 5; i++)
    {
        sum = sum + n[i];
    }
    printf("Sum of elements of Array \n%d", sum);

    getch();
}