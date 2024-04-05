#include <stdio.h>

void range(int vec[], unsigned size, int inicio, int incr) {
    int add = inicio;
    for (int i=0; i<size; i++) {
        vec[i] = add;
        add += incr;
    }
}


int main(int argc, char const *argv[])
{
    int a[5];
    range(a, 5, 3, 2);
    for (int i=0; i<5; i++) 
        printf("%d ", a[i]);
    return 0;
}
