#include <stdio.h> 
int main() { 
    int m, i, n, suma, prva_cifra, cifra; 
    i = 1000; 
    while (i<=9999) { 
        prva_cifra = i/1000; 
        n = i % 1000; 
        suma = 0; 
        while (n > 0) { 
            cifra = n % 10; 
            suma += cifra; 
            n /= 10; 
        } 
        if (suma == prva_cifra) printf("%d\t", i); 
        i++; 
    } 
    return 0; 
}

