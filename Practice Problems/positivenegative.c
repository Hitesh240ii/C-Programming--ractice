#include <stdio.h>
int main (void)
{
    int num1;
    printf("Enter an integer:");
    scanf("%d",&num1);
    if (num1>0)
    {
        printf("number is positive");
    }
    else if (num1<0)
    {
        printf("NUmber is negative");
    }
    else 
    {
        printf("number is zero");
    }
return 0;

}