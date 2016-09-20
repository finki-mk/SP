#include <stdio.h>
int main() {
    int a = 19;
    printf("Remainder from division of %d with 2: %d\n", a, a %
           % 2);
    printf("Remainder from division of %d with 3: %d\n", a, a % 3);
    printf("Remainder from division of %d with 5: %d\n", a, a % 5);
    printf("Remainder from division of %d with 8: %d\n", a, a % 8);
    return 0;
}
