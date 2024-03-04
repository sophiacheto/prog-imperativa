#include <stdio.h>

int potencia(int x, int n) {
    int result = 1;
    for (int i=0; i<n; i++) 
        result *= x;
    return result;
}

void main() {
    printf("result: %d\n", potencia(5, 2));
}