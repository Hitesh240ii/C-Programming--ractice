/*
local scope
    -Variable created inside a function is local scope 
    -It can be used only inside the functions
    -eg
    void myFunction() 
    {
        // Local variable that belongs to myFunction
         int x = 5;

         // Print the variable x
         printf("%d", x);
    }
    -A local variable cannot be used outside the function it belongs to.
    -If you try to access it outside the function, an error occurs:

Global Scope 
    -It is created outside a function
    -it can be used in whole program
    -If you operate with the same variable name inside and outside of a function, C will treat them as two separate variables; 
    -One available in the global scope (outside the function) and one available in the local scope (inside the function):
*/