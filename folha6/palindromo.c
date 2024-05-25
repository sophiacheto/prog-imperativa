#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define FALSE 0
#define TRUE 1

int palindromo(char str[])  {
    int j = strlen(str)-1;
    for (int i=0; i<=j; i++) {
        j--;
        if (str[i]!=str[j]) return FALSE;
    }
    return TRUE;
}


int main(int argc, char const *argv[])
{
    char str[100];
    fgets(str, 100, stdin);
    printf("%d\n", palindromo(str));
    return 0;
}
