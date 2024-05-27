#include <stdio.h>

void decompor(int total_seg, int *horas, int *mins, int *segs) {
    // int h, m, s;
    *horas = total_seg/3600;
    *mins = (total_seg%3600)/60;
    *segs = (total_seg%3600)%60;
}

int main(int argc, char const *argv[])
{
    int i, j, k;
    decompor(3690, &i, &j, &k);
    printf("%dh, %dm, %ds\n", i, j, k);
    return 0;
}
