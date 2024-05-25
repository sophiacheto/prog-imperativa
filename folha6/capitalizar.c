#include <string.h>
#include <ctype.h>
#include <stdio.h>

void capitalizar(char str[]) {
    for (int i=0; str[i] != '\0'; i++) 
        if (isalpha(str[i])) 
            str[i] = toupper(str[i]);    
}


int main(int argc, char const *argv[])
{
    char str[] = "829Teste";
    capitalizar(str);
    puts(str);
    return 0;
}
