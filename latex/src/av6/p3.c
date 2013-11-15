#include <stdio.h>
int e_prost(int n) {
    int i;
    if (n < 4)
        return 1;
    else if ((n % 2) == 0)
        return 0;
    else {
        i = 3;
        while (i * i <= n) {
            if (n % i == 0)
                return 0;
            i += 2;
        }
    }
    return 1;
}
int zbir_cifri(int n) {
    int zbir = 0;
    while (n > 0) {
        zbir += (n % 10);
        n /= 10;
    }
    return zbir;
}
int main() {
    int br = 0, i;
    for (i = 2; i <= 9999; i++) {
        if (e_prost(i) && e_prost(zbir_cifri(i))) {
            printf("Brojot %d go zadovoluva uslovot\n", i);
            br++;
        }
    }
    printf("Pronajdeni se %d broevi koi go zadovoluvaat uslovot\n", br);
    return 0;
}