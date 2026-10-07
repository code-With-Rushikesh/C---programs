#include<stdio.h>

int main()
{
    int std = 0;

    printf("Enter Your Standred\n");
    scanf("%d",&std);
    if (std == 1)
    {
        printf("Exam Start At 9:30 AM\n");
    }

    else if (std == 2)
    {
        printf("Exam Start At 10:30 AM\n");
    }

    else if (std == 3)
    {
        printf("Exam Start At 11:30 AM\n");

    }
    else
    {
        printf("Exam Is Invalid\n");
    }

    return 0;
}