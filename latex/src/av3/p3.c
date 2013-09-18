#include <stdio.h>
int main () {
    float x, y;
    printf ("Vnesete kootdinati \n");
    scanf ("%f %f", &x, &y);
    if (x > 0) {
        if (y > 0)
            printf("I Kvadrant.\n");
        else if (y < 0)
            printf("IV kvadrant.\n");
        else printf("Poz. x oska.\n");
    } else if (x < 0) {
        if (y > 0)
            printf("II kvadrant.\n");
        else if (y < 0)
            printf("III kvadrant.\n");
        else
            printf("Neg. x oska.\n");
    } else {
        if (y > 0)
            printf("Poz. y oska.\n");
        else if (y < 0)
            printf("Neg. y oska.\n");
        else
            printf("Koord. pocetok\n");
    }
    return 0;
}
