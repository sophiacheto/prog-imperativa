#include <stdio.h>

int comparar(char *str1, char *str2) {
    while (*str1!='\0' || *str2!='\0') {
        if (*str1 != *str2)
            return 0;
        str1++;
        str2++;
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    char str1[] = "teste";
    char str2[] = "teste";
    printf("%d\n", comparar(str1, str2));
    return 0;
}
