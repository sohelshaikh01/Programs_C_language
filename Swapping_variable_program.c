#include <stdio.h>
#include <conio.h>
int main()
{
    int var1, var2, temp;
    printf("Enter two integers : ");
    scanf("%d%d", &var1, &var2);
    printf("\nBefore SwappingnFirst variable = %d\nSecond variable = %d", var1, var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("\nAfter SwappingnFirst variable = %d\nSecond variable = %d", var1, var2);
    return 0;
}