#include <stdio.h>
#define MAX 100

int dolzina(char *s) {
	int i, len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	return len;
}

int length(char *s) {
	if (*s == '\0')
		return 0;
	return 1 + length(s + 1);
}

int main() {
	char s[MAX];
	printf("Vnesete ja tekstualna niza:\n");
	gets(s);
	printf("Dolzina: %d i %d\n", dolzina(s), length(s));
	return 0;
}

