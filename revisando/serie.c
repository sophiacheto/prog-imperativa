#include <stdio.h>

double serie_log(double x, int n) {
    double parcela = x;
    double um = 1.0;
    double result = 0.0;
    for (int i=1; i<=n; i++) {
        result += um * parcela/i;
        um *= -1;
        parcela *= x;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%f\n", serie_log(x, n));
    return 0;
}
