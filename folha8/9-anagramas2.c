#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover(char str[], int indice) {
    for (int j=indice; str[j]!='\0'; j++)
        str[j] = str[j+1];  
}

void normalizar (char str[]) {
    char temp;
    for (int i=0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            str[i] = tolower(str[i]);
        else {
            remover(str, i);
            i--;
        }
    }
}

void ordenar(char vec[]) {
    int i, j;
    for(i = 0; vec[i] != '\0'; i++) {
        int imin = i; // índice inicial do mínimo
        for(j = i+1; vec[j] != '\0'; j++) {
            if(vec[j] < vec[imin]) imin = j;
        }
        // trocar o mínimo com vec[i]
        if(imin != i) {
        int temp = vec[i];
        vec[i] = vec[imin];
        vec[imin] = temp;
        }
    }
}

int anagramas(char str1[], char str2[]) {
    normalizar(str1);
    normalizar(str2);
    ordenar(str1);
    ordenar(str2);
    
    if (strlen(str1) != strlen(str2))
        return 0;

    for (int i=0; str1[i] != '\0'; i++) 
        if (str1[i] != str2[i])
            return 0;

    return 1;
}


int main(int argc, char const *argv[])
{
    char str1[] = "Quid est veritas?";
    char str2[] = "Est vir qui adest.";

    printf("%d\n", anagramas(str1, str2));
    return 0;
}
