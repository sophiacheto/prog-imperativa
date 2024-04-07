#include <ctype.h>
#include <stdio.h>

char rodar_letra(char ch) {
    if (!isalpha(ch)) return ch;
    if (isupper(ch)) return 'A' + (ch+1-'A')%26;
    return 'a' + (ch+1-'a')%26;
}

int main(int argc, char const *argv[])
{
    char ch;
    while (1) {
        ch = getchar();
        if (ch==EOF) break;
        putchar(rodar_letra(ch));
    }
    return 0;
}
