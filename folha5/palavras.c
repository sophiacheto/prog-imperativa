#include <ctype.h>
#include <stdio.h>

// int contar_palavras() {
//     int ch; // código de um carater
//     int palavras = 0; // número de linhas
//     do {
//         ch = getchar();
//         while (ch != ' ' && ch != '\n' && ch != '\n')
//             ch = getchar(); // ler um carater
//         palavras++;
//     } while(ch != EOF);

//     return palavras;
// }

// int main(int argc, char const *argv[])
// {
//     printf("%d palavras\n", contar_palavras());
//     return 0;
// }


int contar_palavras() {
    int ch;
    int palavras = 0;
    while (1) {
        ch = getchar(); 
        if (ch==' ' || ch=='\t' || ch=='\n') palavras++;
        if (ch == EOF) {
            palavras++;
            break;
        }
    }
    return palavras;
}


int main(int argc, char const *argv[])
{
    printf("%d\n", contar_palavras());
    return 0;
}