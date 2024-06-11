#include <stdio.h>

int main(void)
{
    int num;
    printf("enter a number to match:");
    scanf("%d",&num);

    switch(num) //enter a variable inside paranthesis
    {
        case 2:  // if the value is 2 then this will get execute
            printf("value is 2");
            break; // to break the statement so that next condition wont get tested
        
        case 3: // if the value is 3 then this will get execute
            printf("value is 3");
        
            break;
        default: // if no value matched then this is default this will get executed
            printf("No values matched");  //no need to add break after default
            
    }
 return 0;
}
