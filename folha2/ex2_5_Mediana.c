#include <stdio.h>
#include <math.h>

int main() {
    int primeiro, segundo, terceiro, mediana;

    printf("Primeiro valor: ");
    scanf("%d", &primeiro);

    printf("\nSegundo valor: ");
    scanf("%d", &segundo);
    
    printf("\nTerceiro valor: ");
    scanf("%d", &terceiro);  

    mediana = primeiro + segundo + terceiro - min(primeiro, segundo, terceiro) - max(primeiro, segundo, terceiro);

    printf("\nMediana: %d", mediana);

}



/*Primeiro valor: 7
Segundo valor: 12
Terceiro valor: 9
Mediana: 9*/