#include <stdio.h>

void sort_desc(int vec[], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        int imin = i; // índice inicial do mínimo
        for(j = i+1; j < n; j++) {
            if(vec[j] > vec[imin]) imin = j;
        }
        // trocar o mínimo com vec[i]
        if(imin != i) {
        int temp = vec[i];
        vec[i] = vec[imin];
        vec[imin] = temp;
        }
    }
}

void printar(int vec[], int tamanho) {
    for (int i=0; i<tamanho; i++)
        printf("%d ", vec[i]);

    printf("\n");
}

int main(int argc, char const *argv[])
{
    int vec[6] = {1,6,2,4,3,5};
    sort_desc(vec, 6);
    printar(vec, 6);
    return 0;
}

