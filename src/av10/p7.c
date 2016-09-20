#include <stdio.h>
void brBukviIZborovi(FILE *f, int *brzborovi, int *brbukvi) {
    char c;
    int vozbor = 0;
    *brzborovi = 0, *brbukvi = 0;
    while ((c = fgetc(f)) != EOF) {
        if (isalnum(c)) {
            (*brbukvi)++;
            if (!vozbor)
                vozbor = 1;
        } else if (vozbor) {
            vozbor = 0;
            (*brzborovi)++;
        }
    }
    if (vozbor)
        (*brzborovi)++;
}
int main(int argc, char **argv) {
    FILE *dat;
    int brzborovi, brbukvi;
    if (argc >= 2) {
        if ((dat = fopen(argv[1], "r")) == NULL) {
            fprintf(stderr, "Greska pri otvoranje na datotekata");
            return (-1);
        }
        brBukviIZborovi(dat, &brzborovi, &brbukvi);
        printf("Prosecniot broj na bukvi po zbor e %5.2f.\n", (float) brbukvi
               / brzborovi);
        fclose(dat);
    } else {
        printf("Nacin na upotreba: %s [pateka do datotekata]\n", argv[0]);
        return -1;
    }
    return (0);
}
