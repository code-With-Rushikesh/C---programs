#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    double f;
};

int main()
{
    printf("%d\n",sizeof(struct Demo));

   return 0;
}
