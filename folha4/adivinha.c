#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int magico = rand()%1000 + 1;
    int guess=0;
    int tentativas=0;

    while (guess!=magico) {
        scanf("%d", &guess);
        tentativas++;
        if (guess<magico) 
            printf("Muito baixo\n");
        else if (guess>magico) 
            printf("Muito alto\n");
    }

    printf("Acertou em %d tentativas\n", tentativas);

    return 0;
}
