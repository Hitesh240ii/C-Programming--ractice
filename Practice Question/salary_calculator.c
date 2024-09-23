#include <stdio.h>
int main(void)
{
    float sal, time;
    printf("Enter your salary per hour (in Rs):");
    scanf("%f", &sal);
    
    printf("Enter the hours you worked:");
    scanf("%f", &time);
    
    int Totalsal = sal*time;

    printf("Your salary is Rs.%d", Totalsal);
    return 0;
}