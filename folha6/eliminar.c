#include <stdio.h>

void eliminar(char str[], char ch) {
    int i;
    for (i=0; str[i]!=ch; i++) {}
    
    while (str[i]!='\0') {
        str[i] = str[i+1];
        i++;
    }
}


int main(int argc, char const *argv[])
{
    char texto[] = "ccefghcij";
    eliminar(texto, 'c');
    puts(texto);
    return 0;
}
