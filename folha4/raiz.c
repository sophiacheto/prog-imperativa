#include <stdio.h>
#include <math.h>


double raiz(double a, double erro) {
    double x0 = a/2;
    double x1 = (x0 + a/x0)/2;
    while (fabs(x0-x1) >= erro) {
        x0 = x1;
        x1 = (x0 + a/x0)/2;
    }
    return x1;
}


int main(int argc, char const *argv[])
{
    printf("%f\n", raiz(0.5, 0.0000001));
    return 0;
}
