#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *next;  
} NODE;


NODE *novo_elemento(int valor) {
    NODE *p = (NODE *) malloc(sizeof(NODE *));

    if (p==NULL)
        return NULL;

    p->valor = valor;
    p->next = NULL;

    return p;
}

NODE *inserir(NODE *lista, int valor) {
    NODE *novo =  novo_elemento(valor);

    if (lista==NULL) // lista vazia
        return novo;

    NODE *curr = lista;
    while (curr->next != NULL)
        curr = curr->next;
    
    curr->next = novo;

    return lista;
}

int encontrar(NODE *lista, int indice) {
    for (int i=0; i<indice; i++) {
        lista = lista->next;
    }

    return lista->valor;
}

int main(int argc, char const *argv[])
{
    NODE *lista = NULL;

    int curr;
    int qtd=-1;
    scanf("%d", &curr);

    while (curr!=0) {
        lista = inserir(lista, curr);
        qtd++;
        scanf("%d", &curr);
    }

    int meio = qtd/2;
    printf("%d\n", meio);

    printf("%d\n", encontrar(lista, meio));
    return 0;
}
