#include <stdio.h>

int media() {
    int curr;
    int soma = 0;
    int qtd = 0;
    // do {
    //     scanf("%d", &curr);
    //     soma += curr;
    //     qtd++;
    // } while (curr != 0);

    while (1) {
        scanf("%d", &curr);
        if (curr == 0) break;
        soma += curr;
        qtd++;
    }

    return soma/qtd;
}


int media2() {
    int curr;
    int soma = 0;
    int qtd = -1;
    do {
        scanf("%d", &curr);
        soma += curr;
        qtd++;
    } while (curr != 0);

    return soma/qtd;
}


void main() {
    printf("result: %d\n", media());
}