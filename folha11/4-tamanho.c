#include <stdio.h>

int numero_linhas(char *nome_ficheiro) {
    FILE *f = fopen(nome_ficheiro, "r");

    int linhas = 0;
    char linha[1000];

    while (fgets(linha, 1000, f) != NULL) {
        linhas++;
    }

    return linhas;
}

int qtd_palavras(char *nome_ficheiro) {
    FILE *f = fopen(nome_ficheiro, "r");

    int palavras = 0;
    char palavra[60];

    while (fscanf(f, "%s", palavra) != EOF) {
        palavras++;
    }

    return palavras;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", qtd_palavras("linhas.txt"));
    return 0;
}
