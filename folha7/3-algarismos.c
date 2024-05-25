#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>

int decimal(char str[]) {
    int multiplicador = 1;
    int resultado = 0;
    int algarismo;

    for (int i=strlen(str)-1; i>=0; i--) {
        assert('0' < str[i] && str[i] < '9');
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
