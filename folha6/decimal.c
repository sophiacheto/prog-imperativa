#include <string.h>
#include <ctype.h>
#include <stdio.h>

int decimal(char str[]) {
    int multiplicador = 1;
    int resultado = 0;
    int algarismo;

    for (int i=strlen(str)-1; i>=0; i--) {
        algarismo = str[i] - '0';
        resultado += algarismo * multiplicador;
        multiplicador *= 10;
    }

    return resultado;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", decimal("123"));
    return 0;
}
