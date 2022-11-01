#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int matrixRandom(int mat[][DIM], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }
}

void stampaMatrice(int matrice[][DIM], int righe, int colonne)
{
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            printf("%d\t", matrice[i][j]);
        }
    }
}

void trasposta(int matrice[][DIM], int righe, int colonne)
{
    int matriceTraposta[colonne][righe];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matriceTraposta[j][i] = matrice[i][j];
        }
    }
    stampaMatrice(matriceTraposta, colonne, righe);
}

int main()
{
    int matrix[DIM][DIM] = {};

    printf("Inserire numero di righe: ");
    int righe = 0;
    scanf("%d", &righe);

    printf("Inserire numero di colonne: ");
    int colonne = 0;
    scanf("%d", &colonne);

    matrixRandom(matrix, righe, colonne);
    stampaMatrice(matrix, righe, colonne);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("ciaone");

    printf("\n");
    printf("\n");
    printf("\n");
    trasposta(matrix, righe, colonne);
    return 0;
}
