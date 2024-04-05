#include <stdio.h>

int filtrar_positivos(int vec[], int size) {
    int qtd = 0;
    for (int i=0; i<size; i++)
        if (vec[i]>0) vec[qtd++] = vec[i];
    return qtd;
}

int main(int argc, char const *argv[])
{
    int teste[] = {6,-1,2,6,7,-10,-3,5,2,-4,5};
    int qtd=filtrar_positivos(teste,11);
    for (int i=0; i<qtd; i++)
        printf("%d ", teste[i]);
    return 0;
}
