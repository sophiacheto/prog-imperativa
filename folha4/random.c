#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("Inteiro entre 0 e 9:\n");
    for (int i=0; i<100; i++)
        printf("%d ", rand()%10);
    printf("\n");
    
    printf("Inteiro entre 1 e 10:\n");
    for (int i=0; i<100; i++)
        printf("%d ", rand()%10 + 1);
    printf("\n");

    printf("Inteiro entre 1 e 100:\n");
    for (int i=0; i<100; i++)
        printf("%d ", rand()%100 + 1);
    printf("\n");

    printf("Inteiro entre -10 e 10:\n");
    for (int i=0; i<100; i++)
        printf("%d ", rand()%21 - 10);
    printf("\n");

    printf("Pares entre 10 e 100:\n");
    for (int i=0; i<100; i++)
        printf("%d ", 2*(rand()%50) + 1);
    printf("\n");

    printf("Double entre 0.0 e 1.0:\n");
    for (int i=0; i<100; i++)
        printf("%f ", (float)rand()+1/RAND_MAX);
    printf("\n");

        printf("Double entre 0.0 e 1.0:\n");
    for (int i=0; i<100; i++)
        printf("%f ", ((float)rand()*2/RAND_MAX)-1);
    printf("\n");

    return 0;
}
