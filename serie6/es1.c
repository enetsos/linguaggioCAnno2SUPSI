#include <stdlib.h>
#include <stdio.h>

struct impiegato
{
    int id;
    char nome[10];
    char congnome[10];
    char indirizzo[10];
    float stipendio;
};
typedef struct impiegato Impiegato;

int main()
{
    const int size = 5;
    Impiegato impiegati[5] = {
        {1, "a", "aa", "aaa", 11},
        {2, "b", "bb", "bbb", 22},
        {3, "c", "cc", "ccc", 33},
        {4, "d", "dd", "ddd", 44},
        {5, "e", "ee", "eee", 55}};

    FILE *fp;
    // scrivi dat
    if ((fp = fopen("impiegati.dat", "w")) != NULL)
    {
        for (int i = 0; i < size; i++)
        {
            fwrite(&impiegati[i], sizeof(Impiegato), 1, fp);
        }

        fclose(fp);
    }

    // leggi dat
    Impiegato impiegatoTemp;
    if ((fp = fopen("impiegati.dat", "r")) != NULL)
    {

        for (int i = 0; i < sizeof(impiegati) / sizeof(Impiegato); i++)
        {
            fread(&impiegatoTemp, sizeof(Impiegato), 1, fp);
            printf("%d %s %s %s %f", impiegatoTemp.id, impiegatoTemp.nome, impiegatoTemp.congnome, impiegatoTemp.indirizzo, impiegatoTemp.stipendio);
            printf("\n");
        }

        fclose(fp);
    }

    // leggi txt
    int id;
    int stipendio;
    if ((fp = fopen("aggiornastipendi.txt", "r")) != NULL)
    {
        for (int i = 0; i < size; i++)
        {
            int id;
            float stipendio;

            fscanf(fp, "%d %*s %*s %*s %f", &id, &stipendio);

            for (int j = 0; j < size; j++)
            {
                if (impiegati[j].id == id)
                    impiegati[j].stipendio = stipendio;
            }
        }

        int fclose(FILE * fopen);
    }

    // scrivi dat
    if ((fp = fopen("impiegati.dat", "w")) != NULL)
    {
        for (int i = 0; i < size; i++)
        {
            fwrite(&impiegati[i], sizeof(Impiegato), 1, fp);
        }

        fclose(fp);
    }

    // leggi dat
    impiegatoTemp;
    if ((fp = fopen("impiegati.dat", "r")) != NULL)
    {
        printf("\n");
        for (int i = 0; i < sizeof(impiegati) / sizeof(Impiegato); i++)
        {
            fread(&impiegatoTemp, sizeof(Impiegato), 1, fp);
            printf("%d %s %s %s %f", impiegatoTemp.id, impiegatoTemp.nome, impiegatoTemp.congnome, impiegatoTemp.indirizzo, impiegatoTemp.stipendio);
            printf("\n");
        }

        fclose(fp);
    }

    return 0;
}