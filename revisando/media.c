#include <stdio.h>

int main(int argc, char const *argv[])
{
    int soma = 0;
    int qtd = 0;
    int cur;
    scanf("%d", &cur);
    while (cur != 0) {
        soma += cur;
        qtd++;
        scanf("%d", &cur);
    }
    float result = ((float) soma)/qtd;
    printf("%f\n", result);
    return 0;
}
