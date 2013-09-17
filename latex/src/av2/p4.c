#include <stdio.h>
int main() {
	char ch;
	int rez;
	printf("Vnesete znak: ");
	scanf("%c", &ch);
	rez = (ch >= 'a') && (ch <= 'z');
	printf("%d\n", rez);
	return 0;
}
