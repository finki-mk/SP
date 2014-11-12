#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define WORDLEN 21
#define LINELEN 81
int ima_poveke_od2isti(char *w) {
    char *c;
    int isti;
    while (*w) {
        c = w + 1;
        isti = 1;
        while (*c) {
            if (tolower(*w) == tolower(*c))
                isti++;
            c++;
        }
        if (isti > 2)
            return 1;
        w++;
    }
    return 0;
}
int main(int argc, char *argv[]) {
    char zbor[WORDLEN];
    FILE *f;
    int brzb = 0;
    if (argc > 2) {
        printf("Upotreba: %s ime_na_datoteka\n", argv[0]);
        exit(-1);
    }
    if (argc == 1)
        f = stdin;
    else if ((f = fopen(argv[1], "r")) == NULL) {
        printf("Datotekata %s ne se otvora.\n", argv[1]);
        return -1;
    }
    while (fgets(zbor, WORDLEN, f)) != NULL) {
        if (ima_poveke_od2isti(zbor)) {
            puts(zbor);
            brzb++;
        }
    }
    printf("\nVkupno %d zborovi.\n", brzb);
    fclose(f);
    return 0;
}
