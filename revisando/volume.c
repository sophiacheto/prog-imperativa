#include <stdio.h>


long volume(long base, long altura, long largura) {
    return base * altura * largura;
}


int main() {
    long b, h, l;
    printf("base?"); scanf("%ld", &b);
    printf("altura?"); scanf("%ld", &h);
    printf("largura?"); scanf("%ld", &l);
    printf("%ld\n", volume(b,h,l));
    return 0;
}

