#include <stdio.h>

int isPrimo(int x) {
    for (int i=2; i<x; i++) 
        if (x%i==0) return 0;
    return 1;
}

int main(int argc, char const *argv[])
{
    int limite;
    scanf("%d", &limite);
    for (int i=2; i<=limite; i++)
        if (isPrimo(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
