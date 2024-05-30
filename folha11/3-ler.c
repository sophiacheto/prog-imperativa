#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(char **texto) {
    for (int i=0; texto[i]!=NULL; i++) {
        puts(texto[i]);
    }
}

int main(int argc, char const *argv[])
{
    FILE *f = fopen("linhas.txt", "r");
    char **linhas = (char **) calloc(100, sizeof(char *));
    int i=0;

    char linha[100];
    while (fgets(linha, 100, f) != NULL) {
        linhas[i] = (char*) malloc(strlen(linha)+1);
        // linhas[i] = linha; 
        strcpy(linhas[i], linha);
        i++;
    }
    linhas[i] = NULL; // Define a última posição como NULL para indicar o fim das linhas.

    print(linhas);
    return 0;
}
