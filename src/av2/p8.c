#include <stdio.h>
int main() {
	float price;
	printf("Enter the price: ");
	scanf("%f", &price);
	printf("The total price e %.2f\n", price * 1.18);
	return 0;
}
