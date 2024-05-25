#include <math.h>

int mediana(int a, int b, int c) {
    int mediana = a + b + c - min(a, b, c) - max(a, b, c);
    assert(mediana > min(a, b, c) && mediana < max(a, b, c));
    return mediana;
}

int min(int a, int b, int c) {
    return fmin(a, fmin(b, c));
}

int max(int a, int b, int c) {
    return fmax(a, fmax(b, c));
}