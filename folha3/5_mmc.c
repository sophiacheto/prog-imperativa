#include <stdio.h>

int mmc(int x, int y) {
    int mmc = 1;
    int maior = x>y ? x : y;

    for (int i=2; i<=maior; i++) 
        while (x%i == 0 || y%i==0) {
            if (x%i == 0) x /= i;
            if (y%i == 0) y /= i;
            mmc *= i;
        }

    return mmc;
}

int main(int argc, char const *argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", mmc(x,y));
    return 0;
}
