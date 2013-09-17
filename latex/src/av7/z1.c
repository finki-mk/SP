#include <stdio.h>
int zbir_po_2cifri( n) {
	return (n % 100) + (n / 100);
}
int main() {
	int i, br = 0;
	for (i = 1000; i <= 9999; i++) {
		if (i % zbir_po_2cifri(i) == 0) {
			printf("Brojot %d go zadovoluva uslovot\n", i);
			br++;
		}
	}
	printf("Pronajdeni se %d broevi koi go zadovoluvaat uslovot\n", br);
	return 0;
}

