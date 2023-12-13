#include <stdio.h>
#include <conio.h>

void main()
{
    char str[100];
    int i = 0;
    printf("C program to convert lower case character into upper case character of String \n");
    printf("Please enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("String into upper case = %s", str);
    getchar();
}