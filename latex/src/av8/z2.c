#include <stdio.h>

int e_prost(int n, int i);
int prv_pogolem_prost(int n);

int main() {
	int broj, razlika;
	printf("Vnesi broj\n");
	scanf("%d", &broj);
	razlika = prv_pogolem_prost(broj) - broj;
	printf("Razlikata pomegju prostiot broj %d i %d e %d\n", prv_pogolem_prost(
			broj), broj, razlika);
	return 0;
}
int e_prost(int n, int i) {
	if (n < 4)
		return 1;
	else if ((n % 2) == 0)
		return 0;
	else if (n % i == 0)
		return 0;
	else if (i * i > n)
		return 1;
	else
		return e_prost(n, i + 2);
}
int prv_pogolem_prost(int n) {
	if (e_prost(n + 1, 3))
		return n + 1;
	else
		return prv_pogolem_prost(n + 1);
}

