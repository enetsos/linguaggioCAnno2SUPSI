#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

struct coordinates{
    int x;
    int y;
    char description[20];
};

typedef struct coordinates Coordinates;

Coordinates initializeWith(int x, int y, char description[20]){
    Coordinates c;
    c.x = x;
    c.y = y;
    strcpy(c.description, description);
    return c;
}

Coordinates initializeWith2(Coordinates init){
    Coordinates c;
    c.x = init.x;
    c.y = init.y;
    strcpy(c.description, init.description);
    return c;
}

Coordinates *initializeWith3(int x, int y, char description[20]){
    Coordinates temp;
    Coordinates *c;
    c = &temp;

    temp.x = x;
    temp.y = y;
    strcpy(temp.description, description);
    return c;
}


void initializeCoordinates(Coordinates *c, int x, int y, char description[20]){
    c->x = x;
    c->y = y;
    strcpy(c->description, description);
}

void printCoordinates(Coordinates c){
    printf("x: %d, y: %d, description: %s", c.x, c.y, c.description);
}

int main(){
    Coordinates c1 = initializeWith(1, 2, "c1");
    Coordinates c2 = initializeWith2(c1);
    Coordinates *c3 = initializeWith3(3, 4, "c3");
    Coordinates c4;
    initializeCoordinates(&c4, 5, 6, "c4");

    printCoordinates(c1);
    printCoordinates(c2);
    printCoordinates(*c3);
    printCoordinates(c4);


    return 0;
}

