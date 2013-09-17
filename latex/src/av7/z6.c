#include <stdio.h>
double f(float i, int j);
float stepen(float i, int j);
int main() {
	int n;
	float x;
	printf("Vnesi broj:\n");
	scanf("%d", &n);
	if ((n >= -2) && (n <= 1))
		printf("Neodredeno.\n");
	else {
		x = -4.0;
		for (x = -4; x <= 4; x += 0.1) {
			printf("x=%3.1f, f(x)=%10.4f\n", x, f(x, n));
		}
	}
	return 0;
}
double f(float i, int j) {
	double vrednost;
	if (i > 0)
		vrednost = i + stepen(i, j) - stepen(i, j + 2);
	else
		vrednost = -stepen(i, j - 1) + stepen(i, j + 1);
	return vrednost;
}
float stepen(float i, int j) {
	int k;
	double vrednost;
	if (i == 0)
		vrednost = 0.0;
	else {
		vrednost = 1.0;
		for (k = 1; k <= j; ++k)
			vrednost *= i;
	}
	return vrednost;
}


