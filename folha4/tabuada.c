#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   

    for (int i=0; i<10; i++) {
        int a = rand()%9 + 1;
        int b = rand()%9 + 1;
        printf("Quanto é %d x %d?\n", a, b);
        int guess;
        scanf("%d", &guess);
        if (guess == (a*b))
            printf("Certo!\n");
        else
            printf("Errado\n");
    }
        
    return 0;
}
