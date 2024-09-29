#include <stdio.h>



float findArea(float height,float breadth)
{
    float area = height*breadth;
    return area;
}


int main(void)
{
    float givenH, givenB;
    printf("enter the height of rectangle:");
    scanf("%f",&givenH);
    printf("Enter the breadth of the rectangle:");
    scanf("%f",&givenB);
    findArea(givenH,givenB);
    float area = findArea(givenH,givenB);
    printf("The area of the given rectangle is %f",area);
    return 0;
}