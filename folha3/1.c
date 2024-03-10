#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n;
    scanf("%f", &n);

    float result = 3 * n * n * n * n * n + 2 * n * n * n * n - 5 * n * n * n - n * n + 7 * n - 6;

    printf("resultado = %f \n", &result);
    return 0;
}
