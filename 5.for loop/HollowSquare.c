//nested loop example
#include <stdio.h>
int main()
{
    int i,j,k;
    int num;

    printf("ENter the number of rows:");
    scanf("%d",&num);
    
    for(i=1 ; i<=num ; i++)// for the number of rows
    {
        for (j=1 ; j<=num ; j++)// for the number of columns
        {
            if (i == 1 || i == num || j == 1 || j == num)//to print first and last row full of stars
            {
                printf("*");
            } else 
            {
                // Print space for the hollow part
                printf(" ");
            }
            
         }
    printf("\n");
    } 
    return 0;
}