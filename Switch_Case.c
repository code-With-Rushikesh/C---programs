#include<stdio.h>

int main ()
{
    int std = 0;
    printf("Enter Your Standred\n");
    scanf("%d",&std);
    switch (std)
    {
        case 1:
            printf("Exam Start At 9:30 AM\n");
            break;

        case 2:
            printf("Exam Start At 10:30 AM\n");
            break;
            
        case 3:
            printf("Exam Start At 11:30 AM\n");
            break;
            
        default :
            printf("Exam Is Invalid\n");    

    }


    return 0;
}