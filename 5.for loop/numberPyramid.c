#include <stdio.h>
int main(void)
{
    int num;
    int i,j,k;
    int value=1;

    printf("Enter Number of rows:" );
    scanf("%d", &num);

    for (j =1 ; j <= num ; j++)
    {
        
        for ( i =1 ; i <=num-j ; i++)
        {
            printf(" ");
        }
        for ( k =1 ; k <=2*j -1; k++)
        {
            printf("%d",value);
            value+=1;
        }
        printf("\n");
    }
    return 0;
}