#include <stdio.h> 
int main () { 
    int brojac = 0, n; 
    float x, y = 1; 
    printf("vnesi ja osnovata: "); 
    scanf("%f", &x); 
    printf("vnesi go eksponentot: "); 
    scanf("%d", &n);    
    while (brojac < n) { 
        y *= x; 
        brojac++; 
    } 
    printf("%f^%d = %f\n", x, n, y); 
    return 0; 
}

