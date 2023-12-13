#include <stdio.h>

int main()
{
    int marks;
    printf("enter your marks");
    scanf("%d", &marks);
    if (marks > 100)
    {
        printf("Don't be over smart, write your marks in limit");
    }
    if ((marks >= 0) && (marks <= 100))
    {
        switch (marks / 10)
        {
        case 10:
        case 9:
            printf("your grade os A :");
            break;
        case 8:
            printf("your grade is B :");
            break;
        case 7:
            printf("your grade is C :");
            break;
        case 6:
            printf("your grade is D :");
            break;
        default:
            printf("your are fail ");
            break;
        }
    }
    return 0;
}