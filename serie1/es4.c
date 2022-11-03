#include <stdio.h>
#include <stdlib.h>

int fattoriale(int n){
    if(n == 0)
        return 1;
    else
        return n * fattoriale(n - 1);
}


int main()
{
    int n;

    do{
        printf("inserisci n: ");
        scanf("%d",&n);
    }while(n < 0);

    printf("fattoriale di %d: %d",n, fattoriale(n));


    return 0;
}
