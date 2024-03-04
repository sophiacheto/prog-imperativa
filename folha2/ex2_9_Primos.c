#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    printf("%d: ", n);

    for (int i=2; i<=n; i++) 
        while (n%i == 0) {
            n /= i;
            printf("%d ", i);
        }
    
}