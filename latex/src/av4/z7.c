#include <stdio.h> 
int main() {
    int a, b, c, tmp;
    printf("Vnesi gi dolzinite na stranite: \n");
    scanf("%d %d %d", &a, &b, &c);
    if((a + b <= c) || (a + c <= b) || (b + c <= a))
        printf("Ne moze da se konstruira triagolnik so tie strani.\n");
    else {
        if(a >= b) {
            tmp=a; a = b; b = tmp;
        }
        if(a >= c) {
            tmp = a; a = c; c = tmp;
        }
        if(b >= c) {
            tmp = b; b = c; c = tmp;
        }
        if(c * c == a * a + b * b) {
            printf("Triagolnikot e pravoagolen.\n");
            printf("Plostinata e %7.3f.\n", a * b / 2.0);
        }
        else { printf("Triagolnikot e ne pravoagolen.\n"); }
    }
    return 0;
}

