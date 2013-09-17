#include "stdio.h"
#define MAX 100

void promena(int *a, int n) {
	int i, j;
	for (i = 0, j = n - 1; i < j; i++, j--) {
		*(a + i) += *(a + j);
		*(a + j) = *(a + i);
	}
	if (n % 2) {
		*(a + n / 2) *= 2;
	}
}
int main() {
	int i, n;
	int a[MAX];

	printf("Kolku elementi ima nizata: ");
	scanf("%d", &n);
	printf("Vnesi gi elementite na nizata\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
		printf("a[i] = %d\n", a[i]);
	promena(a, n);
	for (i = 0; i < n; i++)
		printf("b[i] = %d\n", a[i]);
	return 0;
}

