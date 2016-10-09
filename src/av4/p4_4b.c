#include <stdio.h>
int main () {
    int poeni, ocenka = 0;
    printf("Vnesi poeni: \n");
    scanf("%d", &poeni);
    if (poeni < 0 || poeni > 100)
        printf("Nevalidna vrednost na poeni!\n");
    else {
        if (poeni > 90) ocenka = 10;
        else if (poeni > 80) ocenka = 9;
        else if (poeni > 70) ocenka = 8;
        else if (poeni > 60) ocenka = 7;
        else if (poeni > 50) ocenka = 6;
        else ocenka = 5;
        printf("Ocenka %d\n", ocenka);
    }
    return 0;
}
