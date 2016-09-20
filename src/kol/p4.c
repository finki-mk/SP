#include <stdio.h>

int main() {
	int n, i, pom, zname;
	scanf("%d", &n);
	for (i = n + 1;; i++) {
		pom = i;
		zname = 1;
		while (pom > 0) {
			if ((pom % 10 != 7) && (pom % 10 != 9)) {
				zname = 0;
				break;
			}
			pom /= 10;
		}
		if (zname) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
