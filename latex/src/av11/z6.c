#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char** argv) {
	char c;
	int vozbor = 0, i, ok, brPojavuvanja = 0;
	FILE *dat;
	if (argc != 3) {
		printf("Nevalidni argumenti na komandna linija\n");
		exit(-1);
	} else {
		if ((dat = fopen(argv[1], "r")) == NULL) {
			printf("Datotekata %s ne se otvora!\n", argv[1]);
			exit(-1);
		}
		while ((c = fgetc(dat)) != EOF) {
			if (isdigit(c)) {
				if (!vozbor) {
					vozbor = 1;
					i = 0;
					ok = 1;
				}
				if (argv[2][i] != c)
					ok = 0;
				i++;
			} else if (vozbor) {
				vozbor = 0;
				if (ok)
					brPojavuvanja++;
			}
		}
		if (vozbor && (ok))
			brPojavuvanja++;
		printf("Zborot %s se pojavuva %d pati vo datotekata\n", argv[2],
				brPojavuvanja);
	}
	return 0;
}

