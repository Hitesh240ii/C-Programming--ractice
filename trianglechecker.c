#include <stdio.h>
int main(void)
{
    float side1,side2,side3;
    printf("Enter Length of The side1:");
    scanf("%f",&side1);
    printf("Enter Length of side 2:");
    scanf("%f",&side2);
    printf("Enter Length of side 3:");
    scanf("%f",&side3);

    if(side1==side2 && side2==side3 && side1 == side3)
    {
        printf("Triangle is equilateral");
    }
    else if(side1 == side2 && side2 != side3 || side2 == side3 && side1 != side3 || side1 == side3 && side2 != side3 )
    {
        printf("triangle is isoceles triangle");
    }
    else if(side1 != side2 && side1!= side3 && side2!=side3)
    {
        printf("Triangle is Scalene triangle");
    }




    return 0;

}