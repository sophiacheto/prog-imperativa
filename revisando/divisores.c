#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int soma = 1;
    scanf("%d", &num);
    for (int i=2; i<num; i++) {
        if (num%i==0) soma += i;
    }
    printf("%d\n", soma);
    return 0;
}
