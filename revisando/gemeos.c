#include <stdio.h>


int isPrimo(int x) {
    for (int i=2; i<x; i++) 
        if (x%i==0) return 0;
    return 1;
}


int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    int seguinte;
    int cur = num;
    while (1) {
        if (isPrimo(cur)) {
            seguinte = cur+2;
            if (isPrimo(seguinte)) {
                printf("(%d,%d)\n", cur, seguinte);
                break;
            }
        }
        cur++;
    }
    return 0;
}
