#include <stdio.h>
int is_prime(int n);
int nearest_larger_prime(int n);
int main() {
    int number;
    scanf("%d", &number);
    int is_prime = nearest_larger_prime(number);
    printf("%d - %d = %d\n", is_prime, number, is_prime - number);
    return 0;
}
int is_prime(int n) {
    int k;
    k = 2;
    while (k * k <= n) {
        if (n % k == 0)
            return 0;
        k++;
    }
    return 1;
}
int nearest_larger_prime(int n) {
    do
        n++;
    while (!(is_prime(n)));
    return n;
}
