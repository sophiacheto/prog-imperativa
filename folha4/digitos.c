#include <stdio.h>

int soma_digitos(int n) {
    int soma = 0;
    while (n!=0) {
        printf("%d\n", n);
        soma += n%10;
        n /= 10;
    }
    return soma;
}

int soma(int n) {
    if (n==0) return 0;
    return n%10 + soma(n/10);
}

int main(int argc, char const *argv[])
{
    printf("resultado: %d\n", soma_digitos(1900));
    return 0;
}

