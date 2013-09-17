#include <stdio.h>
#define MAX 100
int main() {
	int a[MAX], n, i, j, temp;
	printf("Vnesete go brojot na elementi vo nizata \n");
	scanf("%d", &n);
	printf("Vnesete gi elementite na nizata: \n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = n - 1; i > 0; i--) {
		for (j = 1; j <= i; j++) {
			if (a[j - 1] > a[j]) {
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Rezultantnata niza e: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

