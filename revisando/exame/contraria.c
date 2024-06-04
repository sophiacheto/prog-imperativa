#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ler_palavra() {
    char aux[100];
    int i=0;
    char curr = getchar();

    while (curr!='\n' && curr!=EOF) {
        aux[i++] = curr;
        curr = getchar();
    }

    aux[i] = '\0';

    char *palavra = (char *) malloc(i+1);

    strcpy(palavra, aux);

    return palavra;

}

int main(int argc, char const *argv[])
{
    int qtd;
    scanf("%d", &qtd);

    char *lista[qtd];
    int i;

    getchar();
    for (i=0; i<qtd; i++)
        lista[i] = ler_palavra();

    puts("\n\n");
    for (int j=i-1; j>=0; j--)
        printf("%s\n", lista[j]);

    return 0;
}
