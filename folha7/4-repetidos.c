#include <stdio.h>


int pertence (char str[], char ch) {
    for (int i=0; str[i] != '\0'; i++)
        if (ch==str[i]) 
            return 1;
    return 0;
}

int main(int argc, char const *argv[])
{
    char ch = getchar();
    char unicos [100] = "";
    int i=0;

    while (ch!='-') {
        if (!(pertence(unicos, ch))) {
            unicos[i++] = ch;   
            unicos[i] = '\0'; 
        }
        ch = getchar();
    }

    puts(unicos);
    return 0;
}





