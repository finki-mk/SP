#include <stdio.h>
#define MAX 100
int main() {
    int n, element, a[MAX], i;
    short rastecka = 1, opagacka = 1;
    printf("Vnesi ja goleminata na nizata: \n");
    scanf("%d", &n);
    printf("Vnesi gi elementite od nizata: \n");
    for(i = 0; i < n; ++i)
        scanf("%d",&a[i]);
    for(i = 0; i< n-1; ++i) {
        if(a[i] >= a[i+1]) {
            rastecka = 0;
            break;
        }
    }    
    for(i = 0; i < n-1; ++i) {
        if(a[i] <= a[i+1]) {
            opagacka = 0;
            break;
        }
    }
    if(!opagacka && !rastecka)
        printf("Nizata ne e nitu strogo rastecka nitu strogo opagacka \n");
    else if(opagacka)
        printf("Nizata e strogo opagacka \n");
    else if(rastecka)
        printf("Nizata e strogo rastecka \n");
    return 0;
}

