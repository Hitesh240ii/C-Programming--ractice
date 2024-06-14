#include <stdio.h>
int main(void)
{
    int i=1;
    int num;
    int factorial =1;

    printf("enter a number :");
    scanf("%d",&num);

    if (num<0)
    {
        printf("enter valid integer value");
    }
    else
    {
        while(i<=num)
        {
            factorial*=i;
            i++;
        }
    }
    printf("value of factorial is %d",factorial);
    printf("DONE");
    return 0;
}