#include <stdio.h>


int checar(char linha[], char palavra[], int inicio) {
    int indice = inicio;
    for (int i=0; palavra[i]!='\0'; i++) {
        if (linha[indice]!=palavra[i])
            return 0;
        indice++;
    }
    return 1;
}

int substring(char linha[], char palavra[]) {
    int ocorre=0;
    for (int i=0; linha[i]!='\0'; i++) {
        if (linha[i]==palavra[0])
            ocorre = checar(linha, palavra, i);
    }

    return ocorre;
}


int main(int argc, char const *argv[])
{
    char linha[101];
    
    fgets(linha, 101, stdin);

    char palavra[101];

    scanf("%s", palavra);

    printf("%d\n", substring(linha, palavra));

    return 0;
}
