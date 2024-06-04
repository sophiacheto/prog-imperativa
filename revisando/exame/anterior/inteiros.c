#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcular_media(int vec[], int tamanho) {
    int soma=0;
    for (int i=0; i<tamanho; i++) 
        soma+=vec[i];
    return soma/tamanho;
} 

int calcular_min(int vec[], int tamanho) {
    int min = vec[0];
    
    for (int i=1; i<tamanho; i++) {
        if (vec[i]<min)
            min = vec[i];
    }

    return min;
}

int calcular_max(int vec[], int tamanho) {
    int max = vec[0];
    // printf("%d", vec[0]);
    
    for (int i=1; i<tamanho; i++) {
        if (vec[i]>max)
            max = vec[i];
    }

    // printf("%d", max);
    return max;
}

void min_max_med(int vec[], int n, int *pmin, int *pmax, int *pmed) {
    int media = calcular_media(vec, n);
    int min = calcular_min(vec, n);
    int max = calcular_max(vec, n);

    *pmin = min;
    *pmax = max;
    *pmed = media;
}

void copiar(int *origem, int *destino, int tamanho) {
    for (int i=0; i<tamanho; i++) {
        destino[i] = origem[i];
        // printf("%d", origem[i]);
    }
}

int *ler_lista(int *tamanho) {
    int indice=0;
    int aux[100];
    int curr;
    // scanf("%d", &curr);


    while (scanf("%d", &curr)!=EOF) {
        aux[indice++] = curr;
        // scanf("%d", &curr);
    }


    int *lista = (int *) calloc(indice, sizeof(int));

    copiar(aux, lista, indice);

    *tamanho = indice;
    return tamanho;
}

int main(int argc, char const *argv[])
{
    int tamanho;
    int *lista = ler_lista(&tamanho);

    int media, min, max;

    min_max_med(lista, tamanho, &min, &max, &media);

    printf("Max: %d\nMin: %d\nMedia: %d\n", max, min, media);


    return 0;
}
