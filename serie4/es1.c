#include <stdio.h>
#include <stdlib.h>

void minMax(int vect[], int len, int *min, int *max){
    *max = vect[0];
    *min = vect[0];
    for(int i = 1; i < len; i++){
        if(vect[i] > *max)
            *max = vect[i];
        if(vect[i] < *min)
            *min = vect[i];
        
    }

    printf("max: %d", *max);
    printf("\nmin: %d", *min);

}



int main()
{
    int min;
    int max;
    int len = 6;

    int vect[] = {1,2,3,4,5,6};

    minMax(vect, len, &min, &max);
    return 0;
}
