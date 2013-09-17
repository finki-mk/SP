#include <stdio.h>
int main() {
	int datum;
	int den, mesec;
	printf("Vnesete datum na raganje: ");
	scanf("%d", &datum);
	den = datum / 1000000;
	mesec = (datum / 10000) % 100;
	printf("Vasata data na raganje e %02d.%02d\n", den, mesec);
	return 0;
}
