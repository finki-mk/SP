#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    char c;
    int brPojavuvanja = 0;
    FILE *dat;

    if ((dat = fopen("dat.txt", "r")) == NULL) {
        printf("Datotekata %s ne se otvora!\n", argv[1]);
        exit(-1);
    }

    char zbor[50];
    gets(zbor);
    int i = 0, count = 0;
    while ((c = fgetc(dat)) != EOF) {
        if (isdigit(c)) {
            if (c != zbor[i++]) {
                if (count == strlen(zbor)) {
                    brPojavuvanja++;
                }
                count = 0;
            } else {
                count++;
            }
        } else {
            if (count == strlen(zbor)) {
                brPojavuvanja++;
            }
            count = 0;
        }
    }
    printf("Zborot %s se pojavuva %d pati vo datotekata\n", zbor,
           brPojavuvanja);
    return 0;
}