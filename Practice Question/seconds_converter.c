#include <stdio.h>
int main(void)
{
    int totalSeconds;
    int hours , minutes, remainingSeconds;

    printf("Enter the Total seconds:");
    scanf("%d", &totalSeconds);

    hours = totalSeconds/ 3600 ;
    minutes = ( totalSeconds - hours*3600) / 60;
    remainingSeconds = ( totalSeconds - hours*3600) % 60;

    printf(" your representation is 0%d hour 0%d minutes %d seconds",hours , minutes, remainingSeconds);
    return 0;
}