#include <stdio.h>
#include <ctype.h>

int repetidos() {
    int cur;
    int next;
    next = tolower(getchar());
    int total=0;
    int qtd=1;
    while (1) {
        cur = next;
        if (cur==EOF) break;
        next = tolower(getchar());
        while (next==cur) {
            next = tolower(getchar());
            qtd++;
        } 
        if (qtd>total) total=qtd;
        qtd=1;
    }
    return total;
}

int main(int argc, char const *argv[])
{
    printf("%d", repetidos());
    return 0;
}
