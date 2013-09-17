#include <stdio.h>
#include <string.h>
#define MAX 100

int palindrom(char *str) {
	int i, len = strlen(str);
	for (i = 0; i < len / 2; i++)
		if (*(str + i) != *(str + len - 1 - i))
			return 0;;
	return 1;
}
int pal(char *str, int start, int end) {
	if(start >= end) return 1;
	if(str[start] == str[end])
		return pal(str, start + 1, end - 1);
	return 0;
}

int main() {
	char s[MAX];
	printf("Vnesete string: ");
	gets(s);
	printf("Vneseniot string %s ", s);
	if (pal(s, 0, strlen(s) - 1))
		printf("e palindrom.");
	else
		printf("ne e palindrom.");
	return 0;
}

