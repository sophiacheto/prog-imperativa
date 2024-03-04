#include <stdio.h>


int bissexto(int n) {
    if ((n%4==0) && !(n%100==0 && n%400!=0)) return 1;
    return 0;
}

int prox_bissexto(int n) {
    int ano;
    for (ano=n; !bissexto(ano); ano++);
    return ano;
}

void main() {
    printf("bissexto: %d\n", prox_bissexto(2017));    
}
