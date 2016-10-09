#include <stdio.h>
int main() {
    float a, b, c, tmp;
    printf("Vnesi dolzini na strani: \n");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        printf("Ne moze da se konstruira triagolnik.\n");
    else {
        if (a >= b) {
            tmp = a; a = b; b = tmp;
        }
        if (a >= c) {
            tmp = a; a = c; c = tmp;
        }
        if (b >= c) {
            tmp = b; b = c; c = tmp;
        } // po ova najdolgata strana kje bide vo c
	if (c * c == a * a + b * b) {
            printf("Tragolnikot e pravoagolen.\n");
            printf("Ploshtinata mu e %7.3f\n", a * b / 2);
        } else {
            printf("Tragolnikot NE e pravoagolen.\n");
        }
    }
    return 0;
}
