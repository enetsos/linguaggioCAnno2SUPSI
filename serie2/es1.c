#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int carica(){
   int numero;


   do{
      printf("numero positivo di 3 crifre: ");
      scanf("%d",&numero);


   }while (!(numero > 99 && numero < 1000));

   return numero;
   
}

bool spezzaNumero(int numero){

   int centi = numero / 100;
   int deci = (numero % 100) / 10;
   int uni = (numero % 10);

   int somma = pow(centi,3) + pow(deci,3) + pow(uni,3);

   if(somma == numero){
      return true;
   } 

   return false;

}

int main() {
   
   printf("ciao");
   int numero = carica();

   if(spezzaNumero(numero))
      printf("risposta: Si'");
   else
      printf("risposta: NO");


}
