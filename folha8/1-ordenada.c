#include <stdio.h>

int ordenada(int vec[], int size) {
    if (size <= 1) 
        return 1; 
    
    return (vec[size-2] <= vec[size-1]) && ordenada(vec, size-1);
}


int ord(int vec[], int size) {
    for (int i=0; i<size-1; i++) 
        if (vec[i] > vec[i+1])
            return 0;
    
    return 1;
}


int main(int argc, char const *argv[])
{
    int vec[] =  {1,2,3,5,4};
    printf("%d\n", ord(vec, 5));
    return 0;
}
