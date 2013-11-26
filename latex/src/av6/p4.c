#include <stdio.h>
int is_prime(int n);
int main () {
    int count = 0, i;
    for (i = 1; i <= (1000 - 2); i++) {
        if (is_prime(i) && is_prime(i + 2)) {
            printf("%d : %d\n", i, (i + 2));
            count++;
        }
    }
    printf("Count: %d\n", count);
    return 0;
}
int is_prime(int n) {
    int i;
    if (n < 4) return 1;
    else if ((n % 2) == 0) return 0;
    else {
        i = 3;
        while (i * i <= n) {
            if (n % i == 0) return 0;
            i += 2;
        }
    }
    return 1;
}
