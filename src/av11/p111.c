#include <stdio.h>

int sum_digits(int n, int odd) {
    if(odd == 1) {
        if(n < 10) return n;
        return n % 10 + sum_digits(n / 100, odd);
    } else {
        if(n < 100) return n / 10;
        return (n / 10) % 10 + sum_digits(n / 100, odd);
    }
}

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int b[100];
    for(i = 0; i < n / 2 + n % 2; ++i) {
        b[i] = sum_digits(a[i], 1) - sum_digits(a[n - 1 - i], 0);
    }
    for(i = 0; i < n / 2 + n % 2; ++i) {
        printf("%d\t", b[i]);
    }
    return 0;

}