#include <stdio.h>

void calcular(int euros) {
    int vinte, dez, cinco, um;
    vinte = euros / 20; printf("Notas de 20: %d\n", vinte);
    dez = (euros % 20) / 10; printf("Notas de 10: %d\n", dez);
    cinco = ((euros % 20) % 10) / 5; printf("Notas de 5: %d\n", cinco);
    um = (((euros % 20) % 10) % 5); printf("Notas de 1: %d\n", um);
}

int main(int argc, char const *argv[]) {
    int euros;
    printf("Quantia em EUR? "); scanf("%d", &euros);
    calcular(euros);
    return 0;
}


