#include <stdio.h>
#include <math.h>

int min(int a, int b, int c) {
    return fmin(a, fmin(b, c));
}

int max(int a, int b, int c) {
    return fmax(a, fmax(b, c));
}

int mediana(int a, int b, int c) {
    int mediana = a + b + c - min(a, b, c) - max(a, b, c);
    return mediana;
}

void realocar_mediana(int vec[], int l, int u) {
    int primeiro = vec[l];
    int meio = vec[(l+u)/2];
    int ultimo = vec[u];

    int med = mediana(primeiro, ultimo, meio);

    if (med==meio) {
        vec[l] = meio;
        vec[(l+u)/2] = primeiro;
    }
    else if (med==ultimo){
        vec[l] = ultimo;
        vec[u] = primeiro;
    }

}

int partition(int vec[], int l, int u) {
    int i, m, temp;

    realocar_mediana(vec, l, u);
    m = l; // m: indice do ponto médio
    for(i = l; i<=u; i++) {
        if(vec[i] < vec[l]) { // fora de ordem
            m++;
            temp = vec[i]; // trocar vec[i], vec[m]
            vec[i] = vec[m];
            vec[m] = temp;
        }
    }
    temp = vec[l]; // trocar vec[l], vec[m]
    vec[l] = vec[m];
    vec[m] = temp;
    return m;
}


void quicksort_rec(int vec[], int l, int u)
{
    int m;
    if(l >= u)
        return; // caso base; termina logo

    // senão: caso recursivo
    m = partition(vec, l, u);
    // partir usando pivot
    quicksort_rec(vec, l, m-1);
    // ordenar vec[l..m-1]
    quicksort_rec(vec, m+1, u);
    // ordenar vec[m+1..u]
}

void printar(int vec[], int tamanho) {
    for (int i=0; i<tamanho; i++)
        printf("%d ", vec[i]);

    printf("\n");
}

int main(int argc, char const *argv[])
{
    int vec[100] = {7,3,5,2,8};
    quicksort_rec(vec, 0, 4);
    printar(vec, 5);
    return 0;
}
