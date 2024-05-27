#include <stdio.h>

void ler(int vec[], int qtd) {
    for (int i=0; i<qtd; i++) 
        scanf("%d", &vec[i]);
}

void swap(int vec[], int indice1, int indice2) {
    int temp = vec[indice1];
    vec[indice1] = vec[indice2];
    vec[indice2] = temp;
}

int particao(int vec[], int inicio, int final) {
    int indice = inicio;
    int primeiro = vec[inicio];


    int maiores[final-inicio];
    int qtd_maiores = 0;

    for (int i=inicio+1; i<=final; i++) {
        if (vec[i] <= primeiro) {
            vec[indice] = vec[i];
            indice++;
        }
        else {
            maiores[qtd_maiores] = vec[i];
            qtd_maiores++;
        }
    }

    vec[indice] = primeiro;

    int j=0;
    for (int i=indice+1; i<=final; i++) { 
        vec[i] = maiores[j];
        j++;
    }
    
    return indice;   
}


void ordenar(int vec[], int inicio, int final) {
    if (inicio >= final) 
        return;
    
    int meio = particao(vec, inicio, final);
    ordenar(vec, inicio, meio-1);
    ordenar(vec, meio+1, final);
}

void insert_sort(int vec[], int tamanho) {
    int valor, j;
    for (int i=1; i<tamanho; i++) {
        valor = vec[i];     // valor que vou inserir na lista ordenada à sua esquerda
        j = i-1;            // índice do elemento atual da lista à esquerda para comparar
        for (j=i-1; j>=0 && valor<vec[j]; j--) {
            vec[j+1] = vec[j]; 
        } 
        vec[j+1] = valor;
    }
}

void selection_sort(int vec[], int tamanho) {
    int i,j;
    for (j=0; j<tamanho; j++) {
        int indice_menor = j;       // inicialmente, primeiro elemento da lista não ordenada
        for (i=j+1; i<tamanho; i++) {
            if (vec[i]<vec[indice_menor])
                indice_menor = i;
        }
        if (indice_menor != j) {
            swap(vec, indice_menor, j);
        }
    }
}

void printar(int vec[], int tamanho) {
    for (int i=0; i<tamanho; i++)
        printf("%d ", vec[i]);

    printf("\n");
}

int main(int argc, char const *argv[])
{
    int vec[100];
    ler(vec, 5);
    ordenar(vec, 0, 4);
    printar(vec, 5);
    return 0;
}
