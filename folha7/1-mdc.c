#include <assert.h>
#include <stdio.h>

int mdc(int a, int b) {
    assert(a>0 && b>0);
    while (a != b) {
        if(a > b)
            a = a - b;  
        else
            b = b - a;
    }
    return a;
}


int main(int argc, char const *argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", mdc(x, y));
    return 0;
}




