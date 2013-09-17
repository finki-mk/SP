#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int eLozinka(char *str) {
	int bukvi = 0, brojki = 0, spec = 0;
	for(; *str; str++) {
		if (isalpha(*str))
			bukvi++;
		else if (isdigit(*str))
			brojki++;
		else
			spec++;
    }
	return (bukvi > 0 && brojki > 0 && spec > 0);
}

int main() {
	char s[MAX];
	printf("Vnesete string: ");
	gets(s);
	printf("Vneseniot string %s ", s);
	if (eLozinka(s))
		printf("moze da bide lozinka.");
	else
		printf("ne moze da bide lozinka.");
	return 0;
}

