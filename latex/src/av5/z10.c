#include <stdio.h> 
int main() { 
    int pol_pozicija, pozicija, max_suma, suma, prethoden, sleden; 
    scanf("%d%d", &prethoden, &sleden); 
    pol_pozicija = pozicija = 2; 
    max_suma = suma = prethoden + sleden; 
    while(1){ 
        if (prethoden < 0 && sleden < 0){ 
            break; 
        } 
        suma = prethoden + sleden; 
        if (suma > max_suma){ 
            max_suma = suma; 
            pol_pozicija = pozicija; 
        } 
        prethoden = sleden; 
        scanf("%d", &sleden); 
        pozicija++; 
    }
    if(pozicija > 2) 
        printf("broevite se naogaat na pozicija %d i %d a nivanata suma e %d",
    pol_pozicija - 1, pol_pozicija, max_suma); 
    return 0; 
}

