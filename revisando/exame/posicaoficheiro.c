#include <stdio.h>


int procurar(FILE *fp, int procurado) {
    int posicao = 0;
    int curr;
    while (fscanf(fp, "%d", &curr) != EOF) {
        if (curr==procurado) 
            return posicao;
    
        posicao++;
    }

    return -1;

}
int main(int argc, char const *argv[])
{
    FILE *fp = fopen("inteiros.txt", "r");
    int procurado;
    scanf("%d", &procurado);
    
    printf("%d\n", procurar(fp, procurado));

    fclose(fp);
    return 0;
}
