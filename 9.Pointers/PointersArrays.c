#include <stdio.h>
int main(void)
{
    int arr[]={3,4,5,6};
    int i;

    for (i =0 ; i<4 ; i++)
    {
        printf("%p\n",&arr[i]); // This will print address of the array elements
    }


    return 0;
}