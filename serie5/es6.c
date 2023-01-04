#include <stdlib.h>
#include <stdio.h>

struct frazione
{
    int numeratore;
    int denominatore;
};
typedef struct frazione Frazione;

int main()
{

    Frazione f1;
    Frazione f2;

    Frazione f2Letto;
    Frazione f1Letto;

    f1.denominatore = 2;
    f1.numeratore = 3;

    f2.denominatore = 4;
    f2.numeratore = 5;

    FILE *fp;
//scrivi
    if ((fp = fopen("frazioni.txt", "w")) != NULL)
    {
        fprintf(fp, "%d/%d, %d/%d", f1.numeratore, f1.denominatore, f2.numeratore, f2.denominatore);

        fclose(fp);
    }
    
//leggi
    if ((fp = fopen("frazioni.txt", "r")) != NULL)
    {
        fscanf(fp, "%d/%d, %d/%d", &f1Letto.numeratore, &f1Letto.denominatore, &f2Letto.numeratore, &f2Letto.denominatore);
        int fclose(FILE * fopen);
    }

    printf("%d/%d, %d/%d", f1Letto.numeratore, f1Letto.denominatore, f2Letto.numeratore, f2Letto.denominatore);

    return 0;
}