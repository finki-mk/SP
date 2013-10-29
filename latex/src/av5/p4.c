#include <stdio.h>
#define MAX 100
int main() {
    int n, element, a[MAX], i;
    short rastecka = 1, opagacka = 1;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; ++i) {
        if (a[i] >= a[i + 1]) {
            rastecka = 0;
            break;
        }
    }
    for (i = 0; i < n - 1; ++i) {
        if (a[i] <= a[i + 1]) {
            opagacka = 0;
            break;
        }
    }
    if (!opagacka && !rastecka)
        printf("Array is not increasing and not decreasing\n");
    else if (opagacka)
        printf("Array is decreasing\n");
    else if (rastecka)
        printf("Array is increasing\n");
    return 0;
}

