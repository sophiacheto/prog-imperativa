#include <stdio.h>

int main() {
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c); // ler 3 valors
        maior = a;
        if (maior<b) maior = b;
        if (maior<c) maior = c; // determinar o maior
    printf("%d\n", maior); // imprimir o resultado
}
