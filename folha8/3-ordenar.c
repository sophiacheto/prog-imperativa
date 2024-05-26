#include <stdio.h>

void ler(int vec[], int qtd) {
    for (int i=0; i<qtd; i++) 
        scanf("%d", &vec[i]);
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
