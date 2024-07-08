#include <stdio.h>


 void Namaste()
    {
        printf("Namaste sir!! aap kese ho?");
    }
    void Bonjour()
    {
        printf("Bonjour!! mala french nai ye");
    }
char ip;

int main(void)
{
    printf("enter f for french and i for indian  :");
    scanf("%c",&ip);

    if (ip =='i' )
    {
        Namaste();
    }
    else
    {
        Bonjour();
    }

   

    return 0;
}