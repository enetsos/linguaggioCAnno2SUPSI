#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct persona
{
    int id;
    char cognome[30];
    char nome[30];
} Persona;

void printArray(Persona *persone, int r)
{
    for (int i = 0; i < r; i++)
    {
        printf("id: %d, cognome: %s, nome: %s\n", persone->id, persone->cognome, persone->nome);
    }
}

void generaArray(Persona *persone, int r)
{

    persone = (Persona *)calloc(r, sizeof(Persona));

    char cognome[] = "cognome";

    char nome[] = "nome";
    for (int i = 0; i < r; i++)
    {
        // strcpy(cognome,"");
        // sprintf(cognome,"%d",i);

        // strcpy(nome,"");
        // sprintf(nome,"%d",i);

        // persone[i].id = i;
        // strcpy(persone[i].cognome,cognome);
        // strcpy(persone[i].nome,nome);
        
        
        persone[i].id = i;
        strcpy(persone[i].cognome, cognome);
        strcpy(persone[i].nome, nome);

        
    }

    
    printArray(persone,r);
}



int main()
{
    Persona *persone;

    int r = rand() % 20 + 1;

    printf("r: %d\n", r);

    generaArray(persone, r);

    puts(persone[0].cognome);

    return 0;
}