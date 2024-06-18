#include <stdio.h>
int main()
{
    int i,j,k;
    int num;

    printf("ENter the number of rows:");
    scanf("%d",&num);
    
    for(i=1 ; i<=num ; i++)
    {
        for (j=1 ; j<=num ; j++)
        {
            if (i == 1 || i == num || j == 1 || j == num) 
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