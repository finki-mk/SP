#include <stdio.h> 
int main () { 
    int counter = 0, n; 
    float x, y = 1; 
    printf("x: "); 
    scanf("%f", &x); 
    printf("n: "); 
    scanf("%d", &n); 
    for(counter = 1, y = x; counter < n; counter++) {
    //for(; counter < n; counter++) {
    	y *= x;
    } 
    printf("%f^%d = %f\n", x, n, y); 
    return 0; 
}

