#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *ler_palavra() {
    char aux[100], *palavra;
    int i=0;
    
    char carac = getchar();
    while (carac != '\n') {
        aux[i] = carac;
        carac = getchar();
        i++;
    }
    aux[i] = '\0';

    palavra = (char *) malloc(i+1);
    strcpy(palavra, aux);
    return palavra;
}

char **ler_palavras(int qtd) {
    char *palavra, **resultado;
    // char *resultado[100];
    int i=0;


    palavra = ler_palavra();
    resultado = (char **) calloc(qtd+1, sizeof(palavra));
    while (*palavra != '\0') {
        resultado[i] = palavra;    // PROBLEM: assignment to ‘char *’ from incompatible pointer type ‘char **’ [-Wincompatible-pointer-types]
        palavra = ler_palavra();
        i++;
    }

    resultado[i] = NULL;
    return resultado;
}

void maior(char **palavras) {
    int i;
    char *maior = palavras[0];
    

    for (i=1; palavras[i] != NULL; i++) {
        if (strlen(palavras[i]) > strlen(maior))
            maior = palavras[i];
    }

    puts(maior);
}


void rem_palavra(char **palavras, char *palavra) {
    for (int i=0; palavras[i] != NULL; i++) {
        if (strcmp(palavras[i], palavra) == 0) {
            for (int j=i; palavras[j+1] != NULL; j++) {
                palavras[j] = palavras[j+1];
            }
            break;
        }
    }
}

int contem(char **palavras, char *palavra) {
    for (int i=0; palavras[i] != NULL; i++) {
        if (strcmp(palavras[i], palavra) == 0)
            return 1;
    }

    return 0;
}

void sem_repetidos(char **palavras) {
    char **aux;
    int i_aux=0;

    int tamanho;
    for (tamanho=0; palavras[tamanho] != NULL; tamanho++) ;
    aux = (char **) calloc(tamanho+1, sizeof(palavras[0]));

    for (int i=0; palavras[i]!=NULL; i++) {
        if (!contem(aux, palavras[i])) {
            aux[i_aux++] = palavras[i];
            puts(palavras[i]);
        }        
    }

    free(aux); 
}

int is_palindromo(char* palavra) {
    int j = strlen(palavra)-1;
    int i=0;

    while (i<=j) {
        if (palavra[i] != palavra[j])
            return 0;
        i++;
        j--;
    }

    return 1;
}

void palindromos(char **palavras) {
    for (int i=0; palavras[i] != NULL; i++) {
        if (is_palindromo(palavras[i]))
            puts(palavras[i]);
    }
}

void print_palavras(char **palavras) {
    for (int i=0; palavras[i] != NULL; i++) {
        puts(palavras[i]);
    }
}


void ordenar(char **palavras) {
    for (int j=0; palavras[j]!=NULL; j++) {
        char *menor = palavras[j];
        for (int i = j+1; palavras[i]!=NULL; i++) {
            if (strcmp(palavras[i], menor) < 0)
                menor = palavras[i];
        }
        char temp[100];
        *temp = *menor;
        *menor = *palavras[j];
        *palavras[j] = *temp;
        // strcpy(temp, menor);
        // strcpy(menor, palavras[j]);
        // strcpy(palavras[j], temp);
    }
}

char nova_letra(char ch) {
    if (islower(ch))
        return (ch-'a'+1)%26 + 'a';
    if (isupper(ch))
        return (ch-'A'+1)%26 + 'A';
    else
        return ch;
}


void cifrar(char **palavras) {
    char nova[100];
    for (int i=0; palavras[i]!=NULL; i++) {
        strcpy(nova, palavras[i]);
        for (int j=0; nova[j]!='\0'; j++)
            nova[j] = nova_letra(nova[j]);
        puts(*nova);
    }
}


int main(int argc, char const *argv[])
{
    char **palavras;
    palavras = ler_palavras(4);

    // ordenar(palavras);
    // print_palavras(palavras);


    // print_palavras(palavras);

    // maior(palavras);
    // rem_palavra(palavras, "isso");

    // print_palavras(palavras);

    // sem_repetidos(palavras);
    // puts(*palavras);
    // // palindromos(palavras);
    cifrar(palavras);
    // print_palavras(palavras);
    return 0;
}
