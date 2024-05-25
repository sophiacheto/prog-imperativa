#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define FALSE 0
#define TRUE 1

int todos_letras(char str[]) {
    for (int i=0; str[i]!='\n'; i++) {
        if (!isalpha(str[i])) return FALSE;
    }

    return TRUE;
}

int main(int argc, char const *argv[])
{
    char str[100];
    fgets(str, 100, stdin);
    printf("%d\n", todos_letras(str));
    return 0;
}
