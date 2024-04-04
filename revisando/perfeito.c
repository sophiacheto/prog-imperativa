#include <stdio.h>


int quadrado(int n) {
    int soma = 0;
    for (int i=1; soma<=n; i+=2) {
        soma+=i;
        if (soma==n) return 1;
    }
    return 0;
}


int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    if (quadrado(n)) printf("True\n");
    else printf("False\n");
    return 0;
}
