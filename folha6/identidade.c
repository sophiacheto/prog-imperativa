#include <stdio.h>

#define N 5
#define FALSE 0
#define TRUE 1

int identidade(int mat[N][N]) {
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++) {
            if (i==j && mat[i][i]!=1) return FALSE;
            if (i!=j && mat[i][j]!=0) return FALSE;
        }
    
    return TRUE;
}


int main(int argc, char const *argv[])
{
    int quadrado[N][N] = {{1,0,0,0,0},
                          {0,1,0,0,0},
                          {0,0,1,0,0},
                          {0,0,0,1,0},
                          {0,0,0,0,1}};
    printf("%d\n", identidade(quadrado));
    return 0;
}
