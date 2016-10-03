#include <stdio.h>
int main() {
    int year;
    printf ("Enter the year: \n");
    scanf ("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d year is leap.\n", year);
    else
        printf("%d year is not leap.\n", year);
    return 0;
}