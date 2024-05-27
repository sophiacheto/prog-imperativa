#include <stdio.h>

typedef struct data {
    int dia, mes, ano;
} Data;

int comparar(Data d1, Data d2) {
    if (d1.ano<d2.ano)
        return -1;
    if (d1.ano>d2.ano)
        return 1;

    if (d1.mes<d2.mes)
        return -1;
    if (d1.mes>d2.mes)
        return 1;

    if (d1.dia<d2.dia)
        return -1;
    if (d1.dia>d2.dia)
        return 1;
    
    return 0;
}

Data diff(Data d1, Data d2) {
    Data result;

    result.ano = d1.ano - d2.ano;
    result.mes = d1.mes - d2.mes;
    result.dia = d1.dia - d2.dia;

    return result;
}


void swap(Data vec[], int indice1, int indice2) {
    Data temp = vec[indice1];
    vec[indice1] = vec[indice2];
    vec[indice2] = temp;
}

void ordena_datas(Data vec_datas[], int tamanho) {
    int i,j;
    for (j=0; j<tamanho; j++) {
        int indice_menor = j;       // inicialmente, primeiro elemento da lista não ordenada
        for (i=j+1; i<tamanho; i++) {
            if (comparar(vec_datas[i], vec_datas[indice_menor])==-1)
                indice_menor = i;
        }
        if (indice_menor != j) {
            swap(vec_datas, indice_menor, j);
        }
    }
}

Data menor_data(Data vec[], int size) {
    Data menor = vec[0];
    for (int i=1; i<size; i++) {
        if (comparar(vec[i], menor) == -1)
            menor = vec[i];
    }

    return menor;
}

void datas_ano(Data vec_datas[], int size, int ano) {
    for (int i=0; i<size; i++) {
        Data curr = vec_datas[i];
        if (curr.ano==ano)
            printf("\n%d/%d/%d\n", curr.dia, curr.mes, curr.ano);
    }
}

void imprimir(Data *lista, int tam){
    for(int i=0; i<tam; i++){
        printf("%d/%d/%d\n", lista->dia, lista->mes, lista->ano);
        lista++;
    }
}


int main(int argc, char const *argv[])
{
    Data datas[] = {{1,1,2024},{1,2,2023},{7,8,2020}};
    imprimir(datas, 3);
    ordena_datas(datas, 3);
    imprimir(datas,3);


    Data menor = menor_data(datas, 3);
    printf("\n%d/%d/%d\n", menor.dia, menor.mes, menor.ano);

    datas_ano(datas, 3, 2020);
    return 0;
}


