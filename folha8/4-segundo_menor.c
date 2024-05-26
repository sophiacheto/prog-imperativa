#include <stdio.h>

int segundo_menor(int vec[], int size) {
    int i, j;
    for(i = 0; i < 2; i++) {
        int imin = i; // índice inicial do mínimo
        for(j = i+1; j < size; j++) {
            if(vec[j] < vec[imin]) imin = j;
        }
        // trocar o mínimo com vec[i]
        if(imin != i) {
        int temp = vec[i];
        vec[i] = vec[imin];
        vec[imin] = temp;
        }
    }

    return vec[1];
}

void printar(int vec[], int tamanho) {
    for (int i=0; i<tamanho; i++)
        printf("%d ", vec[i]);

    printf("\n");
}

int main(int argc, char const *argv[])
{
    int vec[6] = {1,6,2,4,3,5};
    printf("%d\n", segundo_menor(vec, 6));
    printar(vec, 6);
    return 0;
}



