#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main() {
	int i, j, m, n;
	float a[MAX][MAX], b[MAX][MAX];
	FILE *vlezna, *izlezna;
	if ((vlezna = fopen("matrica1.txt", "r")) == NULL) {
		printf("Datotekata matrica1.txt ne se otvora!\n");
		exit(1);
	}
	if (!feof(vlezna))
		fscanf(vlezna, "%d %d", &m, &n);

	if ((m > MAX) || (n > MAX)) {
		printf("Mnogu golema matrica!");
		return (-1);
	}
	for (i = 0; i < m && !feof(vlezna); i++)
		for (j = 0; j < n && !feof(vlezna); j++)
			fscanf(vlezna, "%f", &a[i][j]);
	fclose(vlezna);

	if (i != m || j != n) {
		printf("Nema dovolno podatoci vo datotekata!");
		return (-1);
	}
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			b[j][i] = a[i][j];
	if ((izlezna = fopen("matrica2.txt", "w")) == NULL) {
		printf("Datotekata matrica2.txt ne se otvora!\n");
		exit(1);
	}
	fprintf(izlezna, "%d %d\n", n, m); /* obratno */

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			fprintf(izlezna, "%7.2f\n", b[i][j]);
	fclose(izlezna);
	return (0);
}

