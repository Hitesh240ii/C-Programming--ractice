// A pointer is a variable that stores the memory address of another variable as its value.

// A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

// The address of the variable you are working with is assigned to the pointer:

#include <stdio.h>

int main()
{

    int var = 42;
    int *ptr = &var; //*ptr will is the declaration of the pointer and ptr holds the address 

    printf("%d\n",var);  // prints the var i.e 42
    printf("%p",ptr);  // prints the address of var 

    return 0;
}