#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int fattorialeIterativa(int numero)
{
    int fatt = 1;
    for (int i = 1; i <= numero; i++)
    {
        fatt *= i;
    }

    return fatt;
}

int fattorialeRicorsivo(int numero)
{
    int f;
    if (!numero)
        f = 1;
    else
        f = numero * calcFatt(numero - 1);
    return f;
}

int main()
{

    printf("fatt iterativo: %d", fattorialeIterativa(5));
    printf("fatt ricorsivo: %d", fattorialeRicorsivo(5));
    
    return 0;
}
