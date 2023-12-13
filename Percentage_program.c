#include <stdio.h>

int main()
{
    float per;

    int s1;
    printf("\nEnter marks of Phy : ");
    scanf("%d", &s1);

    int s2;
    printf("\nEnter marks of Che :");
    scanf("%d", &s2);

    int s3;
    printf("\nEnter marks of Bio : ");
    scanf("%d", &s3);

    int s4;
    printf("\nEnter marks of Math : ");
    scanf("%d", &s4);

    int s5;
    printf("\nEnter marks of Eng : ");
    scanf("%d", &s5);

    int s6;
    printf("\nEnter marks of Hindi : ");
    scanf("%d", &s6);

    int sum;
    sum = s1 + s2 + s3 + s4 + s5 + s6;
    float total = 600;

    per = (sum / total) * 100;

    printf("\nTotal percentage : %f", per);

    printf("\nTotal marks obtain out of 600 : %d", sum);

    return 0;
}