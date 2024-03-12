#include <stdio.h>

double serie_log(double x, int n) {
    double potencia = x;
    double um = 1.0;
    double resultado = 0.0;
    for (int i=1; i<=n; i++) {
        resultado += um * potencia/i;
        um = -um;
        potencia *= x;
    }
    return resultado;
}

int main(int argc, char const *argv[])
{
    printf("result: %f\n", serie_log(0.5, 100));
    return 0;
}


