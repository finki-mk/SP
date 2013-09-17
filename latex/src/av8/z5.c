#include <stdio.h>

int count8(int n) {
	if (n == 0)
		return 0;
	if ((n / 10) % 10 == 8 && n % 10 == 8)
		return 2 + count8(n / 10);
	if (n % 10 == 8)
		return 1 + count8(n / 10);
	return count8(n / 10);
}

int main() {
	int n;
	printf("Vnesi n:");
	scanf("%d", &n);
	printf("count8(%d) = %d\n", n, count8(n));
	return 0;
}

