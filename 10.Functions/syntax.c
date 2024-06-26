/*
    return_type function_name (data_type parameter 1 , data_type parameter 2, ...)
    {
    
        code to be executed

    }


    // return type , data_type  can be int , char etc 

*/

// FUNCTION CAN BE CALLED MULTIPLE TIMES

#include <stdio.h>

// Creating a function
void printstar()
{
    printf("*");
}

//CALLING A FUNCTION

int main(void)
{
    printstar();//FUNCTION CALLED
    return 0;
}