#include <stdio.h>
float LinearSearch(int arr[],int size , int searchElement )
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("Calling %d time \n ",i);
        if(arr[i]==searchElement)
        {
            return i ; 
        }           
        
    }

    return -1; 
}

int sum(int a , int b )
{
    return a+b;
}

int main(void)
{
   int arr[10];
   int searchElement ; 
    
    printf("Enter Array Elements :");

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("\nEnter Element no %d : ", i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter element to be search : ");
    scanf("%d",&searchElement);

    int position = LinearSearch(arr,10 , searchElement);
    if(position == -1) 
        printf("\nElement not found :");
    else 
        printf("\nElement found at %d", position);

    return 0;
}