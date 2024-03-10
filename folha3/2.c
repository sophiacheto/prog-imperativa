#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n;
    scanf("%f", &n);

    float result = ((((3*n + 2)*n - 5)*n - 1)*n + 7)*n - 6;

    printf("resultado = %f \n", &result);
    return 0;
}
