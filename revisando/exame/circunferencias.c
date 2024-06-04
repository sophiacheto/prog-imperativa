#include <stdio.h>

typedef struct circunf {
    int x;
    int y;
    int r;
} CIRCUNF;

CIRCUNF ler_circunf() {
    int x, y, r;
    scanf("%d %d %d", &x, &y, &r);
    CIRCUNF c = {x,y,r};

    return c;
}

int intersec(CIRCUNF c, CIRCUNF ultima) {
    return ((c.x-ultima.x)*(c.x-ultima.x) + (c.y-ultima.y)*(c.y-ultima.y)) <= (c.r+ultima.r)*(c.r+ultima.r);
}

int main(int argc, char const *argv[])
{
    int qtd;
    scanf("%d", &qtd);

    CIRCUNF lista[qtd];

    int i;
    for (i=0; i<qtd; i++)
        lista[i] = ler_circunf();
    
    CIRCUNF ultima = lista[i-1];
    for (int j=0; j<qtd; j++) {
        if (intersec(lista[j], ultima))
            printf("%d %d %d\n", lista[j].x, lista[j].y, lista[j].r);
    }

    return 0;
}
