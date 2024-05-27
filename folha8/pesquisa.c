#include <stdio.h>

int pesquisa_binaria(int vec[], int inicio, int final, int procurado) {
    if (final<=inicio)
        return vec[inicio] == procurado;
    
    int indice_meio = (final+inicio)/2;
    if (procurado<=vec[indice_meio])
        return pesquisa_binaria(vec, inicio, indice_meio, procurado);

    return pesquisa_binaria(vec, indice_meio+1, final, procurado);
}

int main(int argc, char const *argv[])
{
    int vec[6] = {1,2,3,4,5,6};
    printf("%d\n", pesquisa_binaria(vec, 0, 5, 1));
    return 0;
}
