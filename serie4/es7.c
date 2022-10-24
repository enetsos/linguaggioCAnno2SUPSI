#include <stdio.h>
#include <stdlib.h>

#define LUNG 15

void iniVector(int vect[], int len){
    for(int i = 0; i < len; i++){
        vect[i] = rand() % 10;
    }
}

void printVector(int vect[], int len){
    for(int i = 0; i < len; i++){
        printf("%d\t", vect[i]);
    }
}

int compareDecresc(const void *a, const void *b){
    return (*(int*)b - *(int*)a);
}

int compareCrescEvenBefore(const void *a, const void *b){
    if(*(int*)a % 2 == 0 && *(int*)b % 2 != 0)
        return -1;
    if(*(int*)a % 2 != 0 && *(int*)b % 2 == 0)
        return 1;
    return (*(int*)a - *(int*)b);
}

int main()
{
    int vect[LUNG];

    iniVector(vect, LUNG);

    printVector(vect, LUNG);

    qsort(vect, LUNG, sizeof(int), compareDecresc);

    printVector(vect, LUNG);
    
    qsort(vect, LUNG, sizeof(int), compareCrescEvenBefore);

    writeOnFile(vect, LUNG);

    printVector(vect, LUNG);

    return 0;
}
