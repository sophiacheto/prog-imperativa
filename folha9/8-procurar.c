#include <stdlib.h>
#include <stdio.h>

char *procurar(char *str, char ch) {
    while (*str != '\0') {
        if (*str == ch) 
            return str;
        str++;
    }

    return NULL;
}


int main(int argc, char const *argv[])
{
    char str[] = "teste hihiu";
    
    printf("%c\n", *procurar(str, 'i'));
    return 0;
}
