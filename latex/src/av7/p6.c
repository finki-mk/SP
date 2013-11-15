#include <stdio.h>
#define MAX 100

int nzd(int m, int n) {
    if (!n)
        return m;
    return nzd(n, m % n);
}

int main() {
    int i, n, a[MAX];
    printf("Vnesi ja goleminata na nizata:");
    scanf("%d", &n);
    printf("Vnesi gi elementite na nizata: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int NZD = nzd(a[0], a[1]);
    for (i = 2; i < n; i++)
        NZD = nzd(NZD, a[i]);
    printf("NZD na elementite na ovaa niza e %d", NZD);
    return 0;
}
