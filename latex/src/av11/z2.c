#include <stdio.h>
#define MAX 81

int main(int argc, char* argv[]) {
	char red[MAX], *c;
	int vozbor = 0, broj_zborovi = 0;
	FILE *vlezna, *izlezna;
	if (argc < 3) {
		printf("Upotreba: %s [ime_na_vlezna_datoteka] [ime_na_vlezna_datoteka]\n",
				argv[0]);
        return -1;
	}
	if ((vlezna = fopen(argv[1], "r")) == NULL) {
		printf("Datotekata %s ne se otvora.\n", argv[1]);
		return -1;
	}
	if ((izlezna = fopen(argv[2], "w")) == NULL) {
		printf("Datotekata %s ne se otvora\n", argv[2]);
		return -1;
	}
	while ((fgets(red, MAX, vlezna)) != NULL) {
		c = red;
		vozbor = 0;
		broj_zborovi = 0;
		while (*c != '\0') {
			if (isalnum(*c)) {
				if (!vozbor)
					vozbor = 1;
			} else if (vozbor) {
				vozbor = 0;
				broj_zborovi++;
			}
			c++;
		}
		if (vozbor)
			broj_zborovi++;
		fprintf(izlezna, "%d %s", broj_zborovi, red);
	}
	fclose(vlezna);
	fclose(izlezna);
	return 0;
}

