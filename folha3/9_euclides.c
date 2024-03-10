#include <stdio.h>

int mdc(int x, int y, int iterations) {
    iterations++;
    if (x==y) {
        printf("mdc(%d,%d) = %d\n", x, x, x);
        printf("%d iterações\n", iterations);
        return x;
    }
    printf("mdc(%d,%d) = ", x, y);
    if (x>y) return mdc(x-y, y, iterations);
    return mdc(x, y-x, iterations);
}


int main(int argc, char const *argv[])
{
    mdc(12,18,0);
    return 0;
}
