#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y, z;
    printf("Enter the values of x,y,z : ");
    scanf("%d%d%d", &x, &y, &z);

    float aver;
    aver = (x + y + z) / 3;

    printf("Average value is %f", aver);

    getch();
}
