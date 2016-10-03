#include <stdio.h>
int main () {
    int i, ocenka = 0;
    printf("Enter points: \n");
    scanf("%d", &i);
    if (i >= 0 && i <= 50) ocenka = 5;
    else if (i > 50 && i <= 60) ocenka = 6;
    else if (i > 60 && i <= 70) ocenka = 7;
    else if (i > 70 && i <= 80) ocenka = 8;
    else if (i > 80 && i <= 90) ocenka = 9;
    else if (i > 90 && i <= 100) ocenka = 10;
    else printf("Invalid number!\n");
    // same as previous problem (problem 4)
    char znak = ' ';
    if (ocenka) {
        int p = i % 10;
        if (ocenka != 5) {
            if (p >= 1 && p <= 3) znak = '-';
            else if (ocenka != 10 && (p >= 8 || p == 0))
                znak = '+';
        }
        printf("The grade is %d%c.\n", ocenka, znak);
    }
    return 0;
}
