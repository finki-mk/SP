#include <stdio.h> 
int main () { 
    int i, odb, dob, pom, prev, cifra; 
    printf("Vnesete vrednost za opsegot.\n"); 
    printf("Od koj broj?\n"); scanf("%d", &odb); 
    printf("Do koj broj?\n"); scanf("%d", &dob); 
    for (i = odb; i <= dob; i++) { 
        pom = i; 
        prev = 0; 
        while (pom > 0) { 
            cifra = pom % 10; 
            prev = prev*10 + cifra; 
            pom /= 10; 
        } 
        if (prev == i) printf("%d\t", i); 
    } 
    return 0; 
}

