/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10


void stampaMatrice(int matrice[][MAX], int righe, int colonne)
{
    for(int i = 0; i < righe; i++)
    {
        for(int j = 0; j < colonne; j++)
        {
            printf("%d\t",matrice[i][j]);
        }
        printf("\n");
    }
}

void trasposta(int matrice[][10], int righe, int colonne){      //matrice che inverte le righe e colonne
    int matriceTraposta[colonne][righe];
    
    for(int i = 0; i < righe; i++)
    {
        for(int j = 0; j < colonne; j++)
        {
            matriceTraposta[j][i] = matrice[i][j];
        }
    }
    stampaMatrice(matriceTraposta, righe, colonne);
    
}

void creaMatrice(int matrice[][MAX])
{
    int righe = 0;
    int colonne = 0;
    
    do{
        printf("Inserire numero di righe: ");
        scanf("%d", &righe);
    } while(!(righe >= 3 && righe < MAX));
    
    do{
        printf("Inserire numero di colonne: ");
        scanf("%d", &colonne);
    } while(!(colonne >= 3 && colonne < MAX));

    for(int i = 0; i < righe; i++)
    {
        for(int j = 0; j < colonne; j++)
        {
            matrice[i][j] = rand() % 9;
        }
    }
    
    stampaMatrice(matrice, righe, colonne);
    trasposta(matrice, righe, colonne);
}


int main()
{
    int matrice[MAX][MAX];
    creaMatrice(matrice);
    
    return 0;
}
