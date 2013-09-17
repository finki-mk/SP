#include <stdio.h>
int main() {
    char op; float br1, br2, rezultat;
    printf("Vnesete dva broja i operator vo format\n");
    printf(" broj1 operator broj2\n");
    scanf("%f %c %f", &br1, &op, &br2);
    if(op == '*') rezultat = br1 * br2;
    else if(op == '+') rezultat = br1 + br2;
    else if(op == '-') rezultat = br1 - br2;
    else if(op == '/') {
        if(br2) rezultat = br1 / br2;
        else {
            printf("Ne se deli so 0!\n");
            return 0;
        }
    } else {
        printf("Nevaliden operator!\n");
        return 0;
    }
    printf("%f %c %f = %f\n", br1, op, br2, rezultat);
    return 0;
}