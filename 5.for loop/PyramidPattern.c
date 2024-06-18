#include <stdio.h>

int main(void)
{
    int i ,j,k;
    int num;
     
    printf("enter the number of rows:");
    scanf("%d",&num);

    for ( i=1 ; i<=num ; i++)
    {
        for (j = 1 ; j <= num -i ; j++) // number of spaces is num - i //this is for number of spaces
        {
            printf(" ");
        }
        for (k=1 ; k<= 2*i - 1 ; k++) //2i-1 is the formula derived by generalizing the number of rows and stars in the rows
        {
            printf("*");
        }
        printf("\n");
    }



    return 0;

}