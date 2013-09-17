#include <stdio.h>
float xnn(float x1, float x2, int n) {
	if (n == 1)
		return x1;
	if (n == 2)
		return x2;
	return (n - 1) * xnn(x1, x2, n - 1) / n + xnn(x1, x2, n - 2) / n;
}
int main() {
	int n;
	printf("Vnesi n:\n");
	scanf("%d", &n);
	printf("xnn(1, 2, %d) = %.2f\n", n, xnn(1, 2, n));
	return 0;
}

