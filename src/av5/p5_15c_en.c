#include <stdio.h>
#include <math.h>
int main() {
    double pi = 0, sign = 4, member = sign;
    int divisor = 1;
    do
    {
        pi += member;
        divisor += 2;
        sign = -sign;
        member = sign / divisor;
    } while (fabs(member) > 1e-6);

/*    pi = member;
    while (fabs(member) > 1e-6)
        pi += member = ((sign*=-1) / (divisor+=2));*/

    printf("pi (approximate) = %10.8lf \t pi = %10.8lf\n", pi, M_PI);

    return 0;
}
