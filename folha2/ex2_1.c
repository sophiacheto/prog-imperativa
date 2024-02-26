#include <stdio.h>

// todos os inteiros são "true", só o zero que não

int main() {
    int i, j, k;

    i = 10; j = 5;
    printf("result: %d\n!i: %d\nj: %d\n", !i < j, !i, j);
    /* result: 1
    !i: 0
    j: 5 */ 


    i = 2; j = 1;
    printf("result: %d\n!!i: %d\n!j: %d\n", !!i + !j, !!i, !j);
    /*result: 1
    !!i: 1
    !j: 0*/

    i = 5; j = 0; k = -5;
    printf("result: %d\n", i && j || k);
    // result: 1

    i = 1; j = 2; k = 3;
    printf("result: %d\n", i < j || k);
    // result: 1

    i = 3; j = 4; k = 5;
    printf("result: %d\n", i < j || j++ < k);
    printf("%d %d %d\n", i, j, k);
    /*result:1
    3 4 5, pois qnd i<j já dá True, a segunda parte do código não corre*/

    i = 7; j = 8; k = 9;
    printf("result: %d\n", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);


    return 0;
}