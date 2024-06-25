#include <stdio.h>
int main(void)
{
    int arr[] = { 1,2,37,4,5,6,7};
    printf("Value at positoin 3 of the array is %d\n",arr[2]);

    printf("The address of the value at position 1 is %d\n",&arr[0]);
    printf("The address of the value at position 2 is %d\n",&arr[1]);
    //or
    printf("The address of the value at position 1 is %d\n",arr);
    printf("The address of the value at position 2 is %d\n", arr+1);

//arr-- is not applicable 

    printf("The  VALUE address of the value at position 1 is %d\n",*(&arr[0]));
    printf("The  VALUE address of the value at position 2 is %d\n",*(&arr[1]));
    //or
    printf("The VALUE  address of the value at position 1 is %d\n",*(arr));
    printf("The VALUE  address of the value at position 2 is %d\n", *(arr+1));
    
    return 0;
}