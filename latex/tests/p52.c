#include <stdio.h>

int main() {
	int a[100];
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	int suma_parni = 0;
	int suma_neparni = 0;
	int parni = 0;
	for(i = 0; i < n; ++i) {
		if(a[i] % 2) {
			suma_neparni += a[i];
		} else {
			suma_parni += a[i];
			++parni;
		}
	}
	printf("%d %d %.2f\n", suma_parni, suma_neparni, (float)(n - parni) / parni);
	return 0;

}