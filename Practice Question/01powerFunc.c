int power(int base , int exp)
{
   
    int ans=1;
    for (int i = 0; i < exp ; i++)
    {
         ans = ans * base;
    }
            return ans ;
}
#include <stdio.h>
int main(void)
{
    int base;
    int exp;
    printf("Enter the base: ");
    scanf("%d",&base);

    printf("Enter exp:");
    scanf("%d",&exp);
    int result = power(base,exp);

    printf("The answer is %d",result);
    return 0;
}