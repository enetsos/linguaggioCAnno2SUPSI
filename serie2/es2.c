#include <stdio.h>
#include <math.h>
#include <stdbool.h>



int main() {
   
   int c = getchar();
   int contaLinee = 0;
   int contaSpazio = 0;
   int contaCaratteri = 0;

   while(c = getchar() != EOF){
    contaCaratteri++;
    if(c == '\n')
        contaLinee++;
    else if(c == ' ')
        contaSpazio++;
   }

   
   int contaParole = contaSpazio + 1;

   printf("Caratteri: %d",contaCaratteri);
   
   printf("Parole: %d",contaParole);
   
   printf("Linee: %d",contaLinee);


   return 0;
}
