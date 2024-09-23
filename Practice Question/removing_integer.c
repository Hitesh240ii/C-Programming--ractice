#include <stdio.h>
int main(void)
{
    float data;
    printf("Enter the data of floating point type:");
    scanf("%f", &data);

    printf("The integer part = %d \n", (int)data);
    printf("The decimal part is = %f", data - (int)data);


    return 0;
}