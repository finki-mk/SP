#include <stdio.h>
int main () { 
    int n = 1, i = 0, broj, del, os1, os2; 
    del = os1 = os2 = 0;
    printf("Kolku broevi treba da se proveruvaat za delivost so 3?\n"); 
    scanf("%d", &n); 
    do { 
        printf("Vnesete broj za proverka: "); 
        scanf("%d", &broj); 
        if (broj % 3 == 0) 
            del++; 
        else if (broj % 3 == 1) 
            os1++; 
        else 
            os2++; 
        i++; 
    } while (i < n); 
    printf("%d broj(a) se delivi so 3.\n", del); 
    printf("%d broj(a) imaat ostatok 1, pri delenje so 3.\n", os1); 
    printf("%d broj(a) imaat ostatok 2, pri delenje so 3.\n", os2); 
    return 0; 
}

