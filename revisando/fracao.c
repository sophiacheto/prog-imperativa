#include <stdio.h>


int mdc(int num, int denom) {
    if (denom==0) return num;
    return mdc(denom, num%denom);
}


int main(int argc, char const *argv[])
{
    int denom, num;
    scanf("%d %d", &num, &denom);
    int md = mdc(num, denom);
    printf("%d/%d\n", (num/md), (denom/md));
    return 0;
}
