#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int info;
    struct node *next;
} NODE;

NODE *novo_elemento(int info){
    NODE *p=(NODE *)malloc(sizeof(NODE));
    if(p != NULL){
        p->info=info;
        p->next=NULL;
    }
    return p;
}

NODE *ins_inicio(NODE *first, int info) {
    NODE *p = novo_elemento(info); // cria novo elemento
    if(p==NULL) {
        return first;
    }
    p->next=first;
    /* liga o novo elemento ao início da lista */
    return p;
}

void imprimir(NODE *first){
    NODE *p = NULL;
    for(p=first; p!=NULL;p=p->next){
        printf("%d ", p->info);
    }
}


// NODE *procura(NODE *first, int info){
//     NODE *p = NULL;
//     for(p=first; p!=NULL; p=p->next){
//     if(p->info == info)
//     return p;
//     }
//     return NULL;
// }

NODE *procura(NODE *first, int info){
    for(; first!=NULL && first->info!=info; first=first->next)
    ;
    return first;
}

NODE *ins_fim(NODE *first, int info){
    NODE *p = novo_elemento(info);
    NODE *curr = NULL;
    if(p==NULL)
        return first;
    // caso especial: lista vazia
    if(first==NULL){
        first = p;
        return first;
    }
    else{
        // procura o último elemento da lista
        for(curr=first; curr->next!=NULL;curr=curr->next)
        ;
        curr->next=p;
        return first;
    }
}

NODE *eliminar(NODE *first, int info){
    NODE *curr, *prev;
    for(curr=first, prev = NULL; curr != NULL && curr->info != info; prev=curr, curr=curr->next);
    if(curr==NULL)
        return first; // info não existe na lista
    if(prev==NULL)
        first = first->next; //info no primeiro nó
    else
        prev->next = curr->next; //info num outro nó
    free(curr);
    return first;
}

void apagar_lista(NODE *first){
    NODE *p = NULL;
    while(first){
        p=first;
        first=first->next;
        free(p);
    }
}

void printar(NODE *first) {
    if (first==NULL) {
        printf("[]\n");
        return;
    }

    printf("[");
    while (first->next != NULL) {
        printf("%d, ", first->info);
        first=first->next;
    }

    printf("%d]\n", first->info);
}




/////////// ex. 2

NODE *vec2list(int vec[], int num) {
    NODE *first = NULL;
    for (int i=0; i<num; i++)
        first = ins_fim(first, vec[i]);

    return first;
}


////////// ex. 3

void print_ord(NODE vec[], int qtd) {
    for (int i=0; i<qtd; i++) {
        NODE menor = vec[i];
        int indice_menor = i;
        
        for (int j=i+1; j<qtd; j++) {
            if (vec[j].info < menor.info) {
                menor = vec[j];
                indice_menor = j;
            }
        }
        NODE temp;
        temp = menor;
        vec[indice_menor] = vec[i];
        vec[i] = temp;
    }

    for (int i=0; i<qtd; i++)
        printf("%d\n", vec[i].info);

}

void imprimir_ord(NODE *first, int num_elementos) {
    NODE aux[num_elementos];    

    for (int i=0; i<num_elementos; i++) {
        aux[i] = *first;
        first=first->next;
    }

    print_ord(aux, num_elementos);
}

int main(int argc, char const *argv[])
{
    // NODE *lista = NULL;

    // printar(lista);
    // lista = ins_inicio(lista, 10);
    // lista = ins_inicio(lista, 20);

    // printar(lista);

    // lista = ins_fim(lista, 30);
    // lista = ins_fim(lista, 40);

    // lista = eliminar(lista, 20);

    // printar(lista);

    // NODE *quinze = procura(lista, 15);

    // apagar_lista(lista);

    // printar(lista);


    // ----------

    int vec[] = {6,5,4,3,2,1};

    NODE *nova = vec2list(vec, 6);

    printar(nova);

    imprimir_ord(nova, 6);

    printar(nova);

    return 0;
}

