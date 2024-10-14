#include <stdio.h>
int main(void)
{
    int arr[2][3]= {{1,2,3},{4,5,6}};

//use curly brackets for loop 
    for (int i=0 ; i<2 ; i++) //for rows
        {
            for (int j=0 ;j<3 ; j++)// for columns
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    return 0;
}