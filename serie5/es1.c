#include <stdio.h>
#include <math.h>
#include <stdbool.h>

struct punto{
    int x;
    int y;
};

struct vettore{
    int x;
    int y;
};

struct punto sommaPuntoVettore(struct punto p, struct vettore v){
    struct punto p2;
    p2.x = p.x + v.x;
    p2.y = p.y + v.y;
    return p2;
}

void sommaPuntoVettore2(struct punto p, struct vettore v){
    p.x = p.x + v.x;
    p.y = p.y + v.y;
}

int main() {
    struct punto punto;
    struct vettore vettore;

    punto.x = 5;
    punto.y = 4;

    vettore.x = 3;
    vettore.y = 2;

    struct punto punto2 = sommaPuntoVettore(punto, vettore);

    sommaPuntoVettore2(punto, vettore); 

    return 0;

}