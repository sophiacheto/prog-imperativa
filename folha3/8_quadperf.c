#include <stdio.h>

int quadrado(int n) {
    for (int i=1; i*i<=n; i++) {
        if (i*i == n) return 1;
    }

    return 0;
}

int quadrado2(int n) {
    int soma=0;
    for (int i=1; soma<=n; i+=2) {
        soma += i;
        if (soma == n) return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", quadrado2(25));
    return 0;
}
