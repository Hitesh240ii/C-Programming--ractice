//for factorial 3*2*1
#include <stdio.h>

int main(void)
{
    //declare 3 variables i ,factorial , num
    // i for increment factorial for initialization as 1 and num for the input from user
    int i;
    int factorial=1;
    int num;


    printf("Enter the number:");
    scanf("%d",&num);
//check input is nonzero since factorial is of only positive integers
    if(num<0)
    {
        printf("Factorial cant be of negative integers");
    }
    else
    {
        for (i=1; i<=num ; i++)
        {
        factorial*=i; //value of factorial is 1 and i is increasing after each loop then multiply the with factorial and add it in factorial
        }
        printf("Factorial of %d is %d",num,factorial);
    }

}