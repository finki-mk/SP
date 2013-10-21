#include <stdio.h>
#define MAX 100
int main() {
    int a[MAX], n, i, j, k, izbrisani = 0;
    printf("Vnesi ja goleminata na nizata: \n");
    scanf("%d", &n);
    printf("Vnesi gi elementite od nizata: \n");
    for(i = 0; i < n; ++i)
        scanf("%d",&a[i]);
    for(i = 0; i < n - izbrisani; ++i)
        for(j = i + 1; j < n - izbrisani; ++j)
            if(a[i] == a[j]) {
                for(k = j; k < n - 1 - izbrisani; ++k)
                    a[k] = a[k + 1];
                izbrisani++;
            }
    n -= izbrisani;
    printf("Rezultantnata niza e: \n");
    for(i = 0; i < n; ++i)
        printf("%d\t", a[i]);
    return 0;
}

