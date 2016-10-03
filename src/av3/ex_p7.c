#include <stdio.h>
int main() {
    int a, b, c, tmp;
    printf("Enter the triangle sides: \n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        printf("Triangle can not be constructed.\n");
    else {
        if (a >= b) {
            tmp = a; a = b; b = tmp;
        }
        if (a >= c) {
            tmp = a; a = c; c = tmp;
        }
        if (b >= c) {
            tmp = b; b = c; c = tmp;
        }
        if (c * c == a * a + b * b) {
            printf("Triangle is right triangle.\n");
            printf("Area is %7.3f.\n", a * b / 2.0);
        } else {
            printf("Triangle is not right triangle.\n");
        }
    }
    return 0;
}
