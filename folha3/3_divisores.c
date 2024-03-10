#include <stdio.h>

int soma_divisores(int n) {
    int soma = 0;

    for (int i=1; i<n; i++) 
        if (n%i == 0) soma += i;

    return soma;       
}

int main(int argc, char const *argv[])
{
    printf("%d\n", soma_divisores(12));
    return 0;
}
