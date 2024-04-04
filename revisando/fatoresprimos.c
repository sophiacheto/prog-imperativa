#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    int i = 2;
    while (num!=1) {
        if (num%i==0) {
            printf("%d ", i);
            num /= i;
        }
        else i++;
    }
    printf("\n");
    return 0;
}
