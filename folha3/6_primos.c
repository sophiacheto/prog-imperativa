#include <stdio.h>

int is_Primo(int x) {
    for (int i=2; i<x; i++)
        if (x%i == 0) return 0;

    return 1;
}


int main(int argc, char const *argv[])
{
    int max; 
    scanf("%d", &max);

    for (int i=2; i<=max; i++)
        if (is_Primo(i)) printf("%d ", i);

    printf("\n");
    return 0;
}
