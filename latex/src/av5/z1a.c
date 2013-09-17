#include <stdio.h> 
int main () { 
    int i = 10, suma = 0; 
    while (i <= 98) { 
        suma = suma + i; 
        i+=2; 
    } 
    printf("Sumata na site parni dvocifreni broevi e %d\n", suma); 
    return 0; 
}

