#include <stdio.h>

void hello();
void GoodBye();

int main(void)
{
    hello();
    GoodBye();
    return 0;
}

void hello()
{
    printf("Hello sir\n");
}

void GoodBye()
{
    printf("Nice to meet you sir Good Bye!!!!");
}