#include <stdio.h>
int prost(int n);
int prv_pogolem_prost(int n);
int main() {
	int broj;
	printf("Vnesi broj\n");
	scanf("%d", &broj);
	int prost = prv_pogolem_prost(broj);
	printf("%d - %d = %d\n", prost, broj, prost - broj);
	return 0;
}
int prost(int n) {
	int k;
	k = 2;
	while (k * k <= n) {
		if (n % k == 0)
			return 0;
		k++;
	}
	return 1;
}
int prv_pogolem_prost(int n) {
	do
		n++;
	while (!(prost(n)));
	return n;
}

