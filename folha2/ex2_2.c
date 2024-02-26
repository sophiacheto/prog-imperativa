#include <stdio.h>

int main() {
    int n = 0;
    if (1 <= n && n <= 10)
        printf("n entre 1 e 10\n");

    int i = 2;
    if (i == 2 || i == 3)
        printf("i igual 2 ou 3\n");

    int j = 1, k = 0;
    i = 2;
    if (i==j && j==k)
        printf("i,j,k iguais\n");


    i = 1, j = 2, k = 3;
    if(i!=j &&i!=k)
        printf("i diferente j e k\n");

    return 0;
}