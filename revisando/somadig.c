#include <stdio.h>

int soma_digitos(int n) {
    int soma, alg;
    soma = 0;
    while (n!=0) {
        alg = n % 10;
        soma += alg;
        n /= 10;
    }
    return soma;
}

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    printf("%d\n", soma_digitos(num));
    return 0;
}
