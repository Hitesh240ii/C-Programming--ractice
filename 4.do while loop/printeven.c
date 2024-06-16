#include <stdio.h>

int main(void)
{
    int i=2;
    int sum=0;

    do
    { 
        sum+=i;
        i+=2;     
    } 
    
    while(i<=100);
    

    printf("sum of even no from 1 to 100 is %d",sum);
return 0;
}