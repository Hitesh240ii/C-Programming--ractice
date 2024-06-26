#include <stdio.h>


void myOtherFun()
{
    printf("This is in implicit function");
}

void myFun()
{
    printf("This is in fun1\n");
    myOtherFun();// calling other function 
}

int main(void)
{
    myFun();
    return 0;
}