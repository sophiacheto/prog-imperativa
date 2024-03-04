# include <stdio.h>

int bissexto(n) {
    if ((n%4==0) && !(n%100==0 && n%400!=0)) return 1;
    return 0;
}

void main() {
    printf("result: %d\n", bissexto(1700));
}