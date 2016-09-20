#include <stdio.h>
#define MAX 100

int gcd(int m, int n) {
    if (!n)
        return m;
    return gcd(n, m % n);
}

int main() {
    int i, n, a[MAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int gcd = gcd(a[0], a[1]);
    for (i = 2; i < n; i++)
        gcd = gcd(gcd, a[i]);
    printf("GCD is %d", gcd);
    return 0;
}
