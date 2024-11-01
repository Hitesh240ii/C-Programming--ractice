#include <stdio.h>

int main(void)
{
   
   int sum = 100 ; 

   int arr[10];
   arr[0]=11;
   arr[1]=22;
   arr[2]=33;
   arr[4]=44;

   int *arrPtr = arr ; 

   for(int i = 0 ; i < 5 ; i++)
   {
       printf("address of %d is %p \n",i+1, arrPtr+i);
   }

    for(int i = 0 ; i < 5 ; i++)
   {
       printf("address of %d is %d \n",i+1, *(arrPtr+i));
   }

   
   printf("%p", &sum);

   int* ptr = &sum ; 

   printf("\n%p",ptr);

   printf("\n%d",*ptr);
    return 0;
}