#include <stdio.h>

int main() {
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("TipTop\n");
		} else if (i % 3 == 0) {
			printf("Tip\n");
		} else if (i % 5 == 0) {
			printf("Top\n");
		} else {
			printf("%d\n", i);
		}
	}
	return 0;
}
