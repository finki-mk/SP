#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char s[MAX], dest[MAX];
	int poz, dolz;
	printf("Vnesete string: ");
	gets(s);
	printf("Vnesete pozicija i broj na znaci za podnizata: \n");
	scanf("%d %d", &poz, &dolz);
	if (poz <= strlen(s)) {
		strncpy(dest, s + poz - 1, dolz);
		dest[dolz] = '\0';
		printf("Novo dobienata tekstualna niza e: ");
		puts(dest);
	} else
		printf("Vnesena e nevalidna pozicija za podnizata, vnesenata niza ima samo %d znaci.\n",
				strlen(s));
	return 0;
}


