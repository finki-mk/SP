#include <stdio.h>
int main() {
	int number;
	scanf("%d", &number);
	printf("Most significant digit is %d, and least significant digit is %d.\n", number / 100,
			number % 10);
	return 0;
}
