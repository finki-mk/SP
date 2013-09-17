#include <stdio.h> 
int main() { 
    int broj, max1, max2, pom; 
    if (scanf("%d%d", &max1, &max2) == 2) { 
        if (max2>max1){ 
            pom = max1; 
            max1 = max2; 
            max2 = pom; 
        } 
        while(scanf("%d", &broj)) { 
            if(broj > max1){ 
                max2 = max1; 
                max1 = broj; 
            } else if (broj>max2) { 
                max2 = broj; 
            } 
        } 
        printf("Brojot so najgolema vrednost e %d\n", max1); 
        printf("Brojot so vtora najgolema vrednost e %d\n", max2); 
    } else { 
        printf("Treba da vnesete najmalku dva celi broja"); 
    } 
    return 0; 
}

