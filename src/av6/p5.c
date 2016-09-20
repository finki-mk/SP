#include <stdio.h>
int factorial(int k) {
    int i, fact_num = 1;
    for (i = 1; i <= k; i++)
        fact_num *= i;
    return fact_num;
}
int sum(int k) {
    int i, zbir = 0;
    for (i = 1; i <= k; i++)
        zbir += i;
    return zbir;
}
int main() {
    int i, n, result = 0;
    if (scanf("%d", &n) && n > 0) {
        for (i = 1; i < n; i++) {
            result += factorial(sum(i));
            printf("%d! + ", sum(i));
        }
        result += factorial(sum(n));
        printf("%d! = %d", sum(n), result);
    } else
        printf("Wrong input value\n");
    return 0;
}
