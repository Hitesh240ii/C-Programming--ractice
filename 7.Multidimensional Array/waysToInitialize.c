#include <stdio.h>
int main(void)
{
    

    //standard way to initialize 2D array
    //data_type nameOfArr[rows][columns] = {{row elements},{column elements}};


    int mat[2][3] = {{1,2,3},{4,5,6}};

    //incomplete values in the internal curly brackets

    int matrix[2][3]= {{5,6},{7}} ; //remaining elements will be filled as 0

    // Excessive values in the internal curly brackets

    int NewMat[2][3]= {5,2,1,6,5};  //this will fill value one after other in the box of matrix  

    return 0;
}