#include <stdio.h>
int minElement(int niza[], int n);
int main() {
    int i, n, a[100];
    printf("Vnesi ja goleminata na nizata: \n");
    scanf("%d", &n);
    printf("Vnesi gi elementite na nizata: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Najmal element vo nizata e: %d \n", minElement(a, n - 1));
    return 0;
}
int minElement(int niza[], int n) {
    if (n == 0)
        return niza[n];
    else {
        int pom = minElement(niza, n - 1);
        if (niza[n] < pom)
            return niza[n];
        return pom;
    }
}

