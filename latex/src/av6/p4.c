#include <stdio.h>
int eprost(int n);
int main () {
    int br = 0, i;
    for (i = 1; i <= (1000 - 2); i++) {
        if (eprost(i) && eprost(i + 2)) {
            printf("Prostire broevi %d I %d se razlikuvaat za 2\n", i, (i + 2));
            br++;
        }
    }
    printf("Pronajdeni se vkupno %d parovi prosti broevi koi go zadovoluvaat uslovot\n", br);
    return 0;
}
int eprost(int n) {
    int i;
    if (n < 4) return 1;
    else if ((n % 2) == 0) return 0;
    else {
        i = 3;
        while (i * i <= n) {
            if (n % i == 0) return 0;
            i += 2;
        }
    }
    return 1;
}
