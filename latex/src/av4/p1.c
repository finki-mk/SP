#include <stdio.h> 
int main() { 
    int i;
    printf("Vnesete cel broj\n");
    scanf ("%d", &i);
    if(i > 0) 
        printf("Vnesen e pozitiven broj\n");
    if(i < 0)
        printf ("Vnesen e negativen broj\n"); 
    if(i == 0)
        printf("Vnesena e nula\n"); 
    return 0; 
}

