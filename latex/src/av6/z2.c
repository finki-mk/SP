#include <stdio.h>
#define MAX 100
int main() {
    int i, n, a[MAX], brNep = 0, brPar = 0, sumNep = 0, sumPar = 0;
    printf("Vnesi ja goleminata na nizata: \n");
    scanf("%d", &n);
    printf("Vnesi gi elementite od nizata: \n");
    for(i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    for(i = 0; i < n; ++i) {
        if(a[i] % 2) {
            brNep++;
            sumNep += a[i];
        } else {
            brPar++;
            sumPar += a[i];
        }
    }
    printf("Sumata na parni elementi: %d\nSumata na neparni elementi: %d\n", sumPar, sumNep);
    printf("Odnosot na parnite so neparnite elementi e %.2f\n", (float)brPar / brNep);
    return 0;
}

