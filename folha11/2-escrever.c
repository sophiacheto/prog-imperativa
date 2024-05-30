#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *f = fopen("linhas.txt", "w");
    int qtd;

    printf("Quantas linhas? ");
    scanf("%d", &qtd);
    getchar();
    
    for (int i=0; i<qtd; i++) {
        char linha[100];
        fgets(linha, 100, stdin);
        fprintf(f, "%s", linha);
    }

    fclose(f);
    return 0;
}
