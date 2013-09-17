#include <stdio.h>
int factoriel(int k) {
	int i, fact_num = 1;
	for (i = 1; i <= k; i++)
		fact_num *= i;
	return fact_num;
}
int suma(int k) {
	int i, zbir = 0;
	for (i = 1; i <= k; i++)
		zbir += i;
	return zbir;
}
int main() {
	int i, n, rezultat = 0;
	printf("Vnesete eden pozitiven cel broj \n");
	if (scanf("%d", &n) && n > 0) {
		for (i = 1; i < n; i++) {
			rezultat += factoriel(suma(i));
			printf("%d! + ", suma(i));
		}
		rezultat += factoriel(suma(n));
		printf("%d! = %d", suma(n), rezultat);
	} else
		printf("Vnesena e pogresna vrednost \n");
	return 0;
}

