#include <stdio.h>

void max_min(int vec[], int size, int *pmax, int *pmin) {
    *pmin = vec[0];
    *pmax = vec[0];
    for (int i=1; i<size; i++) {
        if (vec[i]>*pmax)
            *pmax = vec[i];
        if (vec[i]<*pmin)
            *pmin = vec[i];
    }
}

int main(int argc, char const *argv[])
{
    int vec[5] = {1,2,3,4,5};
    int min, max;
    // printf("min: %d\nmax: %d\n", min, max);
    max_min(vec, 5, &max, &min);
    printf("min: %d\nmax: %d\n", min, max);
    return 0;
}
