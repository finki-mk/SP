#include <stdio.h>
int main() {
	int broj;
	scanf("%d", &broj);
	printf("Najznachajna cifra e %d, a najmalku znachajna e %d.\n", broj / 100,
			broj % 10);
	return 0;
}
