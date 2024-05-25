#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define FALSE 0
#define TRUE 1

int algum_digito(char str[]) {
    for (int i=0; str[i]!='\n'; i++) {
        if (isdigit(str[i])) return TRUE;
    }

    return FALSE;
}

int main(int argc, char const *argv[])
{
    char str[100];
    fgets(str, 100, stdin);
    printf("%d\n", algum_digito(str));
    return 0;
}
