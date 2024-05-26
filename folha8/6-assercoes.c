#include <stdio.h>
#include <assert.h>

int ordenada(int vec[], int size) {
    if (size <= 1) 
        return 1; 
    
    return (vec[size-2] <= vec[size-1]) && ordenada(vec, size-1);
}

void inserir(int vec[], int n, int x) {
    assert(ordenada(vec, n));
    int j = n-1;
    while(j>=0 && vec[j]>x) {
        vec[j+1] = vec[j];
        j--;
    }
    vec[j+1] = x;
    assert(ordenada(vec, n+1));
}


