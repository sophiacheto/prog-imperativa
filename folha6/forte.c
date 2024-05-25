#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define True 1
#define False 0

int maiuscula(char str[]) {
    for (int i=0; str[i] != '\0'; i++)
        if (isupper(str[i])) return True;

    return False;
}

int minuscula(char str[]) {
    for (int i=0; str[i] != '\0'; i++)
        if (islower(str[i])) return True;

    return False;
}

int algarismos(char str[]) {
    for (int i=0; str[i] != '\0'; i++)
        if (isdigit(str[i])) return True;

    return False;
}

int forte(char str[]) {
    return (strlen(str)>5) && maiuscula(str) && minuscula(str) && algarismos(str);
}


int main(int argc, char const *argv[])
{
    char str[100];
    fgets(str, 100, stdin);
    printf("%d\n", forte(str));
    return 0;
}
