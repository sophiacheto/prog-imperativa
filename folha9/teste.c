#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 2;
    int *p;
    p = &i;

    scanf("%d", &i);
    printf("%d", *p);
    return 0;
}
