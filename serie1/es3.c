#include <stdio.h>
#include <math.h>

double perimetro(int base, int altezza){
    return base * 2 + altezza * 2;
}

double area(int base, int altezza){
    return base * altezza;
}
double rapporto(int base, int altezza){
    return perimetro(base,altezza) / area(base,altezza);
}
int main()
{

    double base;
    double altezza;

    printf("Inserisci base: ");
    scanf("%f", &base);

    printf("Inserisci altezza: ");
    scanf("%f", &altezza);

    printf("Base\tAltezza\tPerimetro\tArea\tRapporto");

    for(int i = 0; i < 10; i++){
        printf("\n%f", base);
        printf("\t%f", altezza);
        printf("\t%f", perimetro(base, altezza));
        printf("\t%f", area(base,altezza));
        printf("\t%f", rapporto(base,altezza));
        base += 0.1;
        altezza += 0.1;
    }


    return 0;
}