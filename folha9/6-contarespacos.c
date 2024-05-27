#include <stdio.h>

int contar_espacos(char *str) {
    int count=0;
    while (*str != '\0') {
        if (*str == ' ')
            count++;
        str++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    char teste[] = "vamos testar se isso funciona haha kk";
    printf("%d\n", contar_espacos(teste));
    return 0;
}
