#include <math.h>
#include <stdio.h>

typedef struct ponto{
    double x, y;
} Ponto;


// 3.1
double distancia(Ponto a, Ponto b) {
    double distX = a.x - b.x;
    double distY = a.y - b.y;
    return sqrt(distX*distX + distY*distY);
}

// 3.2
int mesmo_ponto(Ponto a, Ponto b) {
    return distancia(a, b) < 0.000001;
}

// 3.3
void mais_distantes() {
    int maior_distancia = 0;
    Ponto mais_distantes[2];
    Ponto lista[10];

    for (int i=0; i<10; i++) {
        Ponto novo;
        scanf("%lf %lf", &novo.x, &novo.y);
        lista[i] = novo;
    }

    for (int i=0; i<10; i++) {
        Ponto a = lista[i];
        for (int i=0; i<10; i++) {
            Ponto b = lista[i];
            double dist = distancia(a, b);
            if (dist>maior_distancia) {
                maior_distancia = dist;
                mais_distantes[0] = a;
                mais_distantes[1] = b;
            }
        }
    }

    printf("(%.3f, %.3f) e (%.3f, %.3f)\n", mais_distantes[0].x, mais_distantes[0].y, mais_distantes[1].x, mais_distantes[1].y);
}

//3.4
typedef struct ret{
    Ponto inf_esq, sup_dir;
} Rect;

//3.5
int rect_area(Rect r) {
    int base = r.sup_dir.x - r.inf_esq.x;
    int altura = r.sup_dir.y - r.inf_esq.y;

    return base*altura;
}

//3.6
int ponto_dentro(Rect r, Ponto p) {
    return (r.inf_esq.x < p.x) && (r.inf_esq.y < p.y) && (r.sup_dir.x > p.x) && (r.inf_esq.y > p.y);
}

// 3.7
int rect_dentro(Rect r1, Rect r2) {
    return ponto_dentro(r1, r2.inf_esq) && ponto_dentro(r1, r2.sup_dir);
}

int main(int argc, char const *argv[])
{
    mais_distantes();
    return 0;
}
