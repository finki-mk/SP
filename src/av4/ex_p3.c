#include <stdio.h>
int main () {
    float x, y;
    printf ("Enter coordinates \n");
    scanf ("%f %f", &x, &y);
    if (x > 0) {
        if (y > 0)
            printf("I Quadrant.\n");
        else if (y < 0)
            printf("IV Quadrant.\n");
        else printf("Pos. X axis.\n");
    } else if (x < 0) {
        if (y > 0)
            printf("II Quadrant.\n");
        else if (y < 0)
            printf("III Quadrant.\n");
        else
            printf("Neg. x axis.\n");
    } else {
        if (y > 0)
            printf("Pos. y axis.\n");
        else if (y < 0)
            printf("Neg. y axis.\n");
        else
            printf("Origin\n");
    }
    return 0;
}
