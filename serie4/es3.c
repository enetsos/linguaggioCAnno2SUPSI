#include <stdio.h>
#include <stdlib.h>

int matrixRandom(int mat[][10], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            mat[i][j] = rand() % 10;
        }
    }
}

int minVector(int vect[], int len){
    int min = vect[0];
    for(int i = 1; i < len; i++){
        if(vect[i] < min)
            min = vect[i];
    }
    return min;
}

int maxVector(int vect[], int len){
    int max = vect[0];
    for(int i = 1; i < len; i++){
        if(vect[i] > max)
            max = i;
    }
    return max;
}

int minMatrix(int mat[][10], int row, int col){
    int min[10] = {};     
    for(int i = 0; i < row; i++){
        min[i] = minVector(mat[i], col);
    }

    return maxVector(min, row);
}

int main()
{
    
    int matrix[10][10] = {};
    matrixRandom(matrix, 10, 10);

    printf("\n%d", minMatrix(matrix, 10, 10));
    return 0;
}
