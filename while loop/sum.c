#include<stdio.h>
int main(void)
{
    int num;
    int sum =0;
    int current=1;

    printf("enter the number:");
    scanf("%d",&num);

    while(num>=current)
    {
        sum+=current;
        current++;
    }

printf("sum of first %d natural numbers is %d",num,sum);
    return 0;
}