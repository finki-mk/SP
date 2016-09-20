#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int sum(int k) {
    if (k == 0)
        return 0;
    else
        return k + sum(k - 1);
}
int main() {
    int i, n, result = 0;
    scanf("%d", &n);
    if (n > 0) {
        for (i = 1; i < n; i++) {
            result += factorial(sum(i));
            printf("%d! + ", sum(i));
        }
        result += factorial(sum(n));
        printf("%d! = %d", sum(n), result);
    } else
        printf("Wrong input\n");
    return 0;
}