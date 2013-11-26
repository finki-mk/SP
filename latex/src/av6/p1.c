#include <stdio.h>
int sum_of_digits(n) {
    return (n % 100) + (n / 100);
}
int main() {
    int i, br = 0;
    for (i = 1000; i <= 9999; i++) {
        if (i % sum_of_digits(i) == 0) {
            printf("%d\n", i);
            br++;
        }
    }
    printf("Count: %d\n", br);
    return 0;
}