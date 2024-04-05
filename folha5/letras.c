#include <ctype.h>
#include <stdio.h>

// int contar_letras() {
//     int ch; // código de um carater
//     int letras = 0; // número de linhas
//     do {
//         ch = getchar(); // ler um carater
//         if(isalpha(ch)) // nova linha?
//             letras ++;
//     } while(ch != EOF);

//     return letras;
// }

// int main(int argc, char const *argv[])
// {
//     printf("%d letras\n", contar_letras());
//     return 0;
// }



int contar_letras() {
    int ch;
    int letras = 0;
    while (1) {
        ch = getchar(); 
        if (isalpha(ch)) letras++;
        if (ch == EOF) break;
    }
    return letras;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", contar_letras());
    return 0;
}
