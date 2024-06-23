#include <stdio.h>

int main() {
    int array[2][3];
    
    // Taking input from the user
    printf("Enter elements for a 2x3 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element for array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Printing the 2D array
    printf("\nThe elements of the array are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
