#include <stdio.h>
int main(void) 
{
  int num1;
  printf("enter a number:");
  scanf("%d", &num1);
  if (num1 % 2 == 0) {
    printf("%d is even", num1);
  } else {
    printf("%d is odd", num1);
  }

  return 0;
}
//no semicolon after if condition 
//no semicolon after else condition
//and also after funtion parameters