#include <stdio.h>

int faktoriel(int n) {
	if (n == 0)
		return 1;
	else
		return n * faktoriel(n - 1);
}
int suma(int k) {
	if (k == 0)
		return 0;
	else
		return k + suma(k - 1);
}

int main() {
	int i, n, rezultat = 0;
	printf("Vnesete eden pozitiven cel broj \n");
	scanf("%d", &n);
	if (n > 0) {
		for (i = 1; i < n; i++) {
			rezultat += faktoriel(suma(i));
			printf("%d! + ", suma(i));
		}
		rezultat += faktoriel(suma(n));
		printf("%d! = %d", suma(n), rezultat);
	} else
		printf("Vnesena e pogreshna vrednost \n");
	return 0;
}

