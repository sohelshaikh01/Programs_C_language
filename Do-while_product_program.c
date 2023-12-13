#include <stdio.h>
#include <conio.h>

int main()
{

    int num, rem, prod = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {

        rem = num % 10;

        prod *= rem;

        num /= 10;
    } while (num != 0);
    printf("%d", prod);

    return 0;
}
