#include <stdio.h>
int main () { 
    int i = 11, suma = 0; 
    printf("%d", i); 
    suma = i; 
    i=i+2; 
    while (i <= 99){ 
        printf(" + %d", i); 
        suma = suma + i; 
        i+=2; 
    } 
    printf(" = %d\n", suma); 
    return 0; 
}

