#include <stdio.h>
int main () { 
    int i = 11, suma = 0; 
    while (i <= 97) { 
        printf("%d + ", i); 
        suma = suma + i; 
        i+=2; 
    } 
    printf(" %d", i); 
    suma = suma + i; 
    printf(" = %d\n", suma); 
    return 0; 
} 

