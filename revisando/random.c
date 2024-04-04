#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VEZES 100

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    printf("%d ", 1 + rand()/(RAND_MAX/10 + 1));
    printf("\n");

    for (int i=0; i<VEZES; i++) 
        printf("%d ", 1 + rand()/(RAND_MAX/100 +1));
    printf("\n");

    for (int i=0; i<VEZES; i++)
        printf("%f ", ((float) rand()/RAND_MAX));
    printf("\n");
    
    for (int i=0; i<VEZES; i++)
        printf("%f ", 2*((float)rand())/(RAND_MAX) - 1);
    printf("\n");

    return 0;
}
