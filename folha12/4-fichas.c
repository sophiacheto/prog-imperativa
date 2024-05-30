#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct date {
    int dia;
    int mes;
    int ano;
} DATA;

typedef struct ficha {
    int numero;
    char *nome;
    int idade;
    char* profissao;
    DATA data;
} FICHA;


typedef struct node {
    FICHA info;
    struct node *next;
} NODE;

NODE *novo(FICHA info) {
    NODE* novo = (NODE *) malloc(sizeof(NODE));

    if (novo != NULL) {
        novo->info = info;
        novo->next = NULL;
    }

    return novo;
}
NODE *adicionar(NODE *registo, int num, char *nome, int idade, char *prof, DATA data) {
    FICHA file = {num, nome, idade, prof, data};
    NODE *new = novo(file);

    if (new == NULL)
        return registo;

    new->next=registo;

    return new;
}


void printar(FICHA ficha) {
    printf("Número: %d\n", ficha.numero);
    printf("Nome: %s\n", ficha.nome);
    printf("Idade: %d\n", ficha.idade);
    printf("Profissão: %s\n", ficha.profissao);
    printf("Data: %d/%d/%d\n", ficha.data.dia, ficha.data.mes, ficha.data.ano);
    printf("\n");
}


void imprimir_num(struct node *registo, int num) {
    while (registo != NULL) {
        if (registo->info.numero == num) {
            printar(registo->info);
            break;
        }
        registo=registo->next;
    }
}

void imprimir_nome(NODE *registo, char *palavranome) {
    while (registo != NULL) {
        if (strstr(registo->info.nome, palavranome)!=NULL) {
            printar(registo->info);
            break;
        }
        registo=registo->next;
    }
}

NODE *apagar(NODE *registo, int num) {
    NODE *anterior, *atual;
    atual = registo;
    anterior = NULL;

    if (atual->info.numero == num) {
        registo = registo->next;
        free(atual);
        return registo;
    }

    while (atual != NULL) {
        if (atual->info.numero==num) {
            anterior->next = atual->next;
            free(atual);
            return registo;
        }
        anterior = atual;
        atual = atual->next;
    }

    return registo;
}

int escrever(NODE *registo, char *nome_ficheiro) {
    int numero = 0;
    NODE* curr = registo;
    while (curr!=NULL) {
        numero++;
        curr=curr->next;
    }

    FICHA lista[100];
    // = registo->info;
    int i=0;

    while (registo!=NULL) {
        lista[i++] = registo->info;
        registo=registo->next;
        // curr=curr->next;
    }


    FILE *fp = fopen(nome_ficheiro, "wb");

    int retornar = fwrite (lista, sizeof (FICHA), numero, fp);

    fclose(fp);
    return retornar;

}

void printar_arquivo(char *nome) {
    FILE *fp = fopen(nome, "rb");
    FICHA lista[100];
    int retornar = fread(lista, sizeof (FICHA), 100, fp);

    fclose(fp);

    for (int i=0; i<retornar; i++) {
        printar(lista[i]);
    }
    // return retornar;
}

int main(int argc, char const *argv[])
{
    NODE* lista = NULL;
    DATA data = {03, 11, 2003};
    lista = adicionar(lista, 3, "Sophia Cheto", 20, "Estudante", data);
    lista = adicionar(lista, 5, "Sophia Pires", 20, "Estudante", data);
    lista = adicionar(lista, 10, "Rodrigo Freitas", 22, "Engenheiro", data);

    // apagar(lista, 3);
    // imprimir_nome(lista, "heto");
    
    escrever(lista, "fichas.txt");

    printar_arquivo("fichas.txt");
    return 0;
}
