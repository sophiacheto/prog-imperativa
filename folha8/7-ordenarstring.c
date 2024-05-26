#include <stdio.h>

void ordenar(char vec[]) {
    int i, j;
    for(i = 0; vec[i] != '\0'; i++) {
        int imin = i; // índice inicial do mínimo
        for(j = i+1; vec[j] != '\0'; j++) {
            if(vec[j] < vec[imin]) imin = j;
        }
        // trocar o mínimo com vec[i]
        if(imin != i) {
        int temp = vec[i];
        vec[i] = vec[imin];
        vec[imin] = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    char str[] = "ALGORITMO";
    ordenar(str);
    puts(str);
    return 0;
}
