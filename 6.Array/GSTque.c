#include <stdio.h>

int main(void)
{
    float price[3];

    printf("Enter the value of first item:");
    scanf("%f",&price[0]);

    printf("Enter the value of second item:");
    scanf("%f",&price[1]);

    printf("Enter the value of third item:");
    scanf("%f",&price[2]);

    printf("\n");

    printf("Total value of first item is :%f\n",price[0]+0.18*price[0]);
    printf("Total value of second item is :%f\n",price[1]+0.18*price[1]);
    printf("Total value of third item is :%f",price[2]+0.18*price[2]);

    


    return 0;
}