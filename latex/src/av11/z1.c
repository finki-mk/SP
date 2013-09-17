#include <stdio.h>

int bukva(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int samoglaska(char c) {
	c = tolower(c);
	switch (c) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return 1;
	default:
		return 0;
	}
}
int main(int argc, char *argv[]) {
	char c;
	int broj_soglaski = 0, broj_samoglaski = 0;
	FILE *dat;
    // Potrebni se barem 2 argumenti na komandna linija za da raboti programata
    if(argc < 2) {
        printf("Nacin na upotreba: %s \"pateka do datotekata\"\n", argv[0]);
        return -1;
    }
    // Otvoranje na datotekata
	if ((dat = fopen(argv[1], "r")) == NULL) {
		printf("Datotekata %s ne se otvora.\n", argv[1]);
		return -1;
	}
    // Citanje znak po znak do krajot na datotekata
	while ((c = fgetc(dat)) != EOF) {
		if (bukva(c)) {
			if (samoglaska(c))
				broj_samoglaski++;
			else
				broj_soglaski++;
		}
	}
	fclose(dat);
	printf("Odnosot samoglaski/soglaski: %d/%d = %5.2f\n", broj_samoglaski, broj_soglaski,
			(float) broj_samoglaski / broj_soglaski);
	return 0;
}

