#include <stdio.h>
#include <math.h>
int main() {
    double member = 1, pi = 0;
    int i, sign = 1, divisor = 1;
    for(i = 0; i < 100; i++) {
        pi += member;
        divisor += 2;
        sign = -sign;
        member = (double)sign / divisor;
    }
    pi *= 4;
    printf("pi (approximate) = %lf\n", pi);
    return 0;
}
