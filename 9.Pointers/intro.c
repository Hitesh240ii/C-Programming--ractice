// A pointer is a variable that stores the memory address of another variable as its value.

// A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

// The address of the variable you are working with is assigned to the pointer:

//stored value is hexadecimal 

#include <stdio.h>

int main()
{

    int var = 42;
    int *ptr = &var; //*ptr will is the declaration of the pointer and ptr holds the address 

    int *ptr2 = NULL ; // this is NULL pointer
    printf("%d\n",var);  // prints the var i.e 42

     
    printf("This is the address of the variable var %p\n", ptr);  // prints the address of var or
    printf("This is another way of printing address of var %p\n", &var);

    printf("This is NUll pointer %p\n",ptr2);

    printf("The address of the pointer is %p", &ptr);
    // use %d and *ptr to get the corresponding address value eg. this will print 42 after changing

    return 0;
}