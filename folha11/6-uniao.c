#include <stdio.h>

void uniao(char *ficheiro1, char *ficheiro2) {
    char linha[1000];
    FILE *f1 = fopen(ficheiro1, "r");
    FILE *f2 = fopen(ficheiro2, "r");
    FILE *destino = fopen("uniao.txt", "write");

    while (fgets(linha, 1000, f1)!=NULL) {
        fprintf(destino, "%s", linha);
    }
    while (fgets(linha, 1000, f2)!=NULL) {
        fprintf(destino, "%s", linha);
    }
}

int main(int argc, char const *argv[])
{
    uniao("linhas.txt", "teste.txt");
    return 0;
}
