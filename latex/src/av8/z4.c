#include <stdio.h>
int sumDigits(int n) {
	if (n == 0)
		return 0;
	return n % 10 + sumDigits(n / 10);
}

int main() {
	int n;
	printf("Vnesi n:");
	scanf("%d", &n);
	printf("sumDigits(%d) = %d\n", n, sumDigits(n));
	return 0;
}

