#include <stdio.h>

int main(void)
{
    int i ;


    printf("even number from 1 to 50 are");
    
    for ( i=0 ; i<=50 ; i+=2)// initialize with 0 then give condition upto which we have to print even number then increment i by 2 since even number...
    {
        printf("%d\n",i);
    }



    return 0;
}