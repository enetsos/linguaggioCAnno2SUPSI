#include <stdio.h>
#include <stdlib.h>

void scomponi (int n){
    int milli = n / 1000;
    int centi = (n % 1000) / 100;
    int deci = (n % 100) / 10;
    int uni = (n % 10);
    printf("\n%d\t%d\t%d\t%d", milli, centi, deci, uni);
}


int main()
{
    int n;

    do{
        printf("inserisci n: ");
        scanf("%d",&n);
    }while(n < 1000 || n > 9999);

    scomponi(n);


    return 0;
}
