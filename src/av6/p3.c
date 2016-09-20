#include <stdio.h>
int is_prime(int n) {
    int i;
    if (n < 4)
        return 1;
    else if ((n % 2) == 0)
        return 0;
    else {
        i = 3;
        while (i * i <= n) {
            if (n % i == 0)
                return 0;
            i += 2;
        }
    }
    return 1;
}
int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int main() {
    int br = 0, i;
    for (i = 2; i <= 9999; i++) {
        if (is_prime(i) && is_prime(sum_digits(i))) {
            printf("%d\n", i);
            br++;
        }
    }
    printf("Count: %d\n", br);
    return 0;
}