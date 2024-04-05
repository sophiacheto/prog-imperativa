 #include <stdio.h>
 
  int ocorre(int vec[], int size, int valor) {
    for (int i=0; i<size; i++) 
        if (vec[i]==valor) return 1;
    return 0;
 }


 int repetidos(int vec[], int size) {
    for (int i=1; i<size; i++) {
        if (ocorre(vec, i, vec[i])) return 1;
    }
    return 0;
 }


 int main(int argc, char const *argv[])
 {
    int a[5] = { 2, -1, 0, 2, -1 };
    int b[5] = { 3, 4, 1, 2, -1 };
    printf("%d\n", repetidos(a, 5)); // imprime 1
    printf("%d\n", repetidos(b, 5)); // imprime 0
    return 0;
 }
 