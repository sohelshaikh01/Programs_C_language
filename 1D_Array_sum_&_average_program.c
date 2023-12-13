#include <stdio.h>
#include <conio.h>

void main()
{
    int Arr[100], n, i, sum = 0;
    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &Arr[i]);
        sum += Arr[i];
    }
    printf("\nThe Sum of the Aray is : %d", sum);
    printf("\nThe Average of the Array is : %0.2f", (float)sum / n);
    getch;
}
