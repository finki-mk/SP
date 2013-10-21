#include <stdio.h>

int main() {
	float y, x;
	int n;
	scanf("%f %d", &x, &n);
	y = 1;
	int i;
	for(i = 0; i < n; ++i) {
		y = y * x;
	}
	printf("%.2f^%d = %.2f", x, n, y);
	return 0;
}
