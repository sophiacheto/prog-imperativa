#include <stdio.h>

int mdc(int x, int y) {
    int menor = x>y ? y : x;
    int mdc; 

    for (int i=1; i<menor; i++)
        if (x%i == 0 && y%i == 0) mdc = i;

    return mdc;
}

int fracao(int num, int denom) {
    int mindiv = mdc(denom, num);

    int novo_denom = denom/mindiv;
    int novo_num = num/mindiv;

    printf("%d/%d\n", novo_num, novo_denom);
    return 0;
}

int main(int argc, char const *argv[])
{
    fracao(56, 32);
    return 0;
}

