#include <stdio.h>
#define True 1
#define False 0

int sum(int array[20], int tamanho) {
    int soma=0;
    for (int i=0; i<tamanho; i++)
        soma+=array[i];
    return soma;
}

int linhas_iguais(int array[20][20], int tamanho, int soma) {
    for (int i=0; i<tamanho; i++)
        if (sum(array[i], tamanho) != soma) return False;

    return True;
}

int colunas_iguais(int array[20][20], int tamanho, int soma) {
    int sum=0;
    for (int col=0; col<tamanho; col++) {
        for (int lin=0; lin<tamanho; lin++)
            sum += array[lin][col];
        if (sum!=soma) return False;
        sum=0;
    }
    
    return True;
}

int diagonais_iguais(int array[20][20], int tamanho, int soma) {
    int sum=0;
    for (int i=0; i<tamanho; i++) 
        sum+=array[i][i];
    if (sum!=soma) return False;

    sum=0;
    int j=tamanho-1;
    for (int i=0; i<tamanho; i++) {
        sum+=array[i][j];
        j--;
    }
    if (sum!=soma) return False;

    return True;
}

int magico(int a[20][20], int n) {
    int soma_linha = sum(a[0], n);
    return colunas_iguais(a, n, soma_linha) && linhas_iguais(a, n, soma_linha) && diagonais_iguais(a, n, soma_linha);
}




int main(int argc, char const *argv[])
{
    int quadrado[20][20] = { {2,7,6},
                             {9,5,1},
                             {4,3,8} };

    printf("%d\n", magico(quadrado, 3));
    return 0;
}
