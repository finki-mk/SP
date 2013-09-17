#include<stdio.h>
#define MAX 100
int main() {
    int a[MAX], b[MAX], n, i, scalar = 0;
    printf("Vnesi ja goleminata na vektorite: ");
    scanf("%d", &n);
    printf("Vnesi gi koordinatite na prviot vector: \n");
    for(i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("Vnesi gi koordinatite na vtoriot vector: \n");
    for(i = 0; i < n; ++i)
        scanf("%d", &b[i]);
    for(i = 0; i < n; ++i)
        scalar += a[i] * b[i];
    printf("Scalarniot proizvod na vektorite e: %d\n", scalar);
    return 0;
}

