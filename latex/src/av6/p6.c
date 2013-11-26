#include <stdio.h>
double f(float i, int j) {
    double value;
    if (i > 0)
        value = i + power(i, j) / j - power(i, j + 2) / (j + 2);
    else
        value = -power(i, j - 1) / (j - 1) + power(i, j + 1) / (j + 1);
    return value;
}
float power(float i, int j) {
    int k;
    double value;
    if (i == 0)
        value = 0.0;
    else {
        value = 1.0;
        for (k = 1; k <= j; ++k)
            value *= i;
    }
    return value;
}
int main() {
    int n;
    float x;
    scanf("%d", &n);
    if ((n >= -2) && (n <= 1))
        printf("Undefined.\n");
    else {
        x = -4.0;
        for (x = -4; x <= 4; x += 0.1) {
            printf("x = %3.1f, f(x) = %10.4f\n", x, f(x, n));
        }
    }
    return 0;
}
