#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n >= 100 && n <= 999) {
		int prva_cifra = n / 100;
		if(prva_cifra == 1) {
			printf("VIP");
		} else {
			printf("Regularen");
		}
		printf(" posetitel na vlez %d\n", (n % 3) + 1);
	} else {
		printf("Nepravilen broj\n");
	}
	return 0;
}
