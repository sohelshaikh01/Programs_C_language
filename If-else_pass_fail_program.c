#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 35)
    {
        printf("You are pass");
    }
    else
    {
        printf("You are fail");
    }
    return 0;
}