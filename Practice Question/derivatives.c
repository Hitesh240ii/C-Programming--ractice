#include <stdio.h>
#include <math.h>

float deri(float x,float c,float n)
{
    
    float powerValue = pow(x,n-1);
    float result;

    result = n*c*powerValue;
    printf("The derivative of %f*%f^(%f)is %f ", c , x , n , result);

    return result;

}





int main(void)
{
    float constant;
    float var, power;  
    printf("Enter the constant c: ");
    scanf("%f",&constant);
    printf("Enter the value of variable");
    scanf("%f", &var);
    printf("Enter the value of power");
    scanf("%f",&power);

    deri(var,constant,  power);
    return 0;
}