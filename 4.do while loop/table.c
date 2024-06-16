#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("5 * %d = %d\n", i, 5 * i);
        i++;
    } 
    while (i <= 10);
    return 0;
}
