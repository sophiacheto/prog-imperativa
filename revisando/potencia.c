#include <stdio.h>

int potencia(int x, int n) {
    int result = 1;
    for (int i=0; i<n; i++)
        result *= x;
    return result;
}

int pot(int x, int n) {
    if (n==0) return 1;
    return x * pot(x, n-1);
}


int main(int argc, char const *argv[])
{
    int num, exp;
    scanf("%d %d", &num, &exp);
    printf("%d, %d\n", potencia(num, exp), pot(num, exp));
    return 0;
}
