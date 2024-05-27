#include <stdio.h>

int comprimento(char *str) {
    int len = 0;
    while(*str++ != '\0')
        len++;
    return len;
}

void inverter(char *str) {
    char temp;
    int i=0;
    int j=comprimento(str)-1;

    while (i<j) {
        temp = *(str+i);
        *(str+i) = *(str+j);
        *(str+j) = temp;
        i++;
        j--;
    }
}

int main(int argc, char const *argv[])
{
    char str[] = "abcdef";
    
    puts(str);
    inverter(str);
    puts(str);
    return 0;
}





