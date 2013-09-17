#include <stdio.h> 
//#include <math.h> 
int main() { 
    int razlika, i, n = 0, broj = 0; 
    int suma_neparni_pozicii = 0, suma_parni_pozicii = 0; 
    scanf("%d", &n); 
    for (i = 1; i <= n; i++){ 
        scanf("%d", &broj); 
        if (i % 2){ 
            suma_neparni_pozicii += broj; 
        } else { 
            suma_parni_pozicii += broj; 
        } 
    } 
    razlika = suma_parni_pozicii - suma_neparni_pozicii; 
    //printf("razlikata e %d", razlika); 
    //if(abs(razlika) < 10){ 
    if(razlika < 10 && razlika > -10){ 
        printf("Dvete sumi se slicni"); 
    } else { 
        printf("Dvete sumi mnogu se ralikuvaat"); 
    } 
    return 0; 
}

