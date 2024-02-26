# include <stdio.h>

int main() {
    int vinte, dez, cinco, um, total, resto;
    printf("Quantia em EUR? ");
    scanf("%d", &total);

    vinte = total / 20;
    resto = total % 20;

    dez = resto / 10;
    resto %= 10;

    cinco = resto / 5;
    um = resto % 5;

    printf("notas EUR 20: %d", vinte);
    printf("\nnotas EUR 10: %d", dez);
    printf("\nnotas EUR 5: %d", cinco);
    printf("\nnotas EUR 1: %d\n", um);
}
/*
Quantia em EUR? 93
notas EUR 20: 4
notas EUR 10: 1
notas EUR 5: 0
moedas EUR 1: 3
*/