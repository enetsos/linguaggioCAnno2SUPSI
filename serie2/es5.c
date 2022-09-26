#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int numeroUno = rand() % (10001);
    int numeroDue;
    int distanzaMax = 0;
    int distanzaMin = 10000;

    for (int i = 0; i < 1000; i++)
    {
        numeroDue = rand() % (10001);
        if (abs(numeroDue - numeroUno) > distanzaMax)
            distanzaMax = numeroDue - numeroUno;
        if (abs(numeroDue - numeroUno) < distanzaMin)
            distanzaMin = numeroDue - numeroUno;
        numeroUno = numeroDue;
    }

    printf("distanza max: %d", distanzaMax);
    printf("\ndistanza min: %d", abs(distanzaMin));

    return 0;
}
