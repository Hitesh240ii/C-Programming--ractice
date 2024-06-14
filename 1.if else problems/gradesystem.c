#include <stdio.h>
int main(void)
{
int grade;
printf("Enter the mark:");
scanf("%d",&grade);

if (grade >= 90 && grade <= 1008)
{
    printf("Your grade is A");
}

else if (grade < 90 && grade >80 )
{
    printf("Your Grade is B");
}

else if (grade <80 && grade > 70)
{
    printf("Your Grade is C");
}
else if (grade < 70 && grade >60)
{
    printf("Your grade is D");
}
else if (grade<60)
{
    printf("you are failed");
}
    return 0;

}