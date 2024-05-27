#include <stdio.h>

int mdc(int num, int denom) {
    if (denom==0) return num;
    return mdc(denom, num%denom);
}


void reduzir(int *pnum, int *pdenom) {
    int mindiv = mdc(*pnum, *pdenom);

    *pnum = *pnum/mindiv;
    *pdenom = *pdenom/mindiv;
}


int main(int argc, char const *argv[])
{
    int num = 2;
    int denom = 4;

    reduzir(&num, &denom);
    printf("%d/%d\n", num, denom);
    return 0;
}
