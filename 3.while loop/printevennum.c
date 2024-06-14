#include <stdio.h>

int main(void)
{
    int i=2;
    int sum=0;
    
    while(i<=100)
    {
        sum+=i;
        i+=2;   
        
    }

    printf("sum of even no from 1 to 100 is %d",sum);
return 0;
}