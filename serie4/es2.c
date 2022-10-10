#include <stdio.h>
#include <stdlib.h>

int *smallest(int vect[], int len){
    int *min = &vect[0];
    for(int i = 1; i < len; i++){
        if(vect[i] < *min)
            min = &vect[i];
    }
    return min;
}



int main()
{
    
    int vect[] = {1,2,3,4,5,6};
    //print all vect[i]
    for(int i = 0; i < 6; i++){
        printf("%d\t", vect[i]);
    }

    printf("\n%d", *smallest(vect, 6));
    printf("\n%d", smallest(vect, 6));
}
