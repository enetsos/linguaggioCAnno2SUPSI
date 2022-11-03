#include <stdio.h>
#include <stdlib.h>

void stampaPallottiere(int n){
    printf("\n|");
    for(int i = 0; i < n; i++)
        printf("x");
    for(int i = 0; i < 6; i++)
        printf("-");
    for(int i = 0; i < (10 - n); i++)
        printf("x");
    printf("|");
}


void pallottiere (int n){
    int centi = (n % 1000) / 100;
    int deci = (n % 100) / 10;
    int uni = (n % 10);
    
    stampaPallottiere(centi);
    
    stampaPallottiere(deci);
    
    stampaPallottiere(uni);

}




int main()
{
    int n;

    do{
        printf("inserisci n: ");
        scanf("%d",&n);
    }while(n < 100 || n > 999);

    pallottiere(n);


    return 0;
}
