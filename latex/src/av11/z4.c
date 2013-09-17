#include <stdio.h>
#include <stdlib.h>
int main() {
	char c;
	int zbor = 0, red = 0, vozbor = 0, vkupno = 0;
	FILE *dat;
	if ((dat = fopen("KRSPrimer.txt", "r")) == NULL) {
		printf("Datotekata KRSPrimer.txt ne se otvora");
		exit(-1);
	}
	while ((c = fgetc(dat)) != EOF) {
		if (isalnum(c)) {
			if (!vozbor) {
				vozbor = 1;
			}
		} else if (vozbor) {
			vozbor = 0;
			zbor++;
			vkupno++;
		}
		if (c == '\n') {
			if (zbor > 10) {
				red++;
			}
			zbor = 0;
		}
	}
	printf("Vkupno %d reda imaat povekje od 10 zbora\n", red);
	printf("Vo datotekata ima vkupno %d zbora.\n", vkupno);
	return 0;
}

