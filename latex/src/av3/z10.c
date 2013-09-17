#include <stdio.h>
int main() {
    int broj;
    printf("Vnesete tricifren broj: ");
    scanf("%d", &broj);
    printf("Najznacajna cifra e %d, a najmalku znacajna e %d\n", broj / 100, broj % 10);
    return 0;
}

