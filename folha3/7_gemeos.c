#include <stdio.h>

int is_Primo(int x) {
    if (x==1) return 0;
    
    for (int i=2; i<x; i++)
        if (x%i == 0) return 0;

    return 1;
}


int main(int argc, char const *argv[])
{
    int n; 
    scanf("%d", &n);
    int continuar = 1;

    for (int i=n; continuar; i++)
        if (is_Primo(i) && is_Primo(i+2)) {
            printf("(%d,%d)\n", i, i+2);
            continuar = 0;
        }

    return 0;
}