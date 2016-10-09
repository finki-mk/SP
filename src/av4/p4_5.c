#include <stdio.h>
int main() {
        . . .
        else ocenka = 5;

// isto kako za prethodnata zadacha (4)
        char znak = ' ';
        int pc = poeni % 10;
        if (ocenka != 5) {
            if (pc >= 1 && pc <= 3) znak = '-';
            else if (ocenka != 10 && (pc >= 8 || pc == 0))
                znak = '+';
        }
        printf("Ocenka %d%c\n", ocenka, znak);
    }
    return 0;
}