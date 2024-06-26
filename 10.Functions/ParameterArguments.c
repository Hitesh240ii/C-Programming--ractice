/*
syntax
    
    returnType functionName (parameter 1 , parameter 2, ....)
    {
        code to be executed
    }
*/

// When a parameter is passed to the function, it is called an argument
// eg

#include <stdio.h>

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Hutesh");
  myFunction("HIIITTTEEsshhh");
  myFunction("hitya");
  return 0;
}