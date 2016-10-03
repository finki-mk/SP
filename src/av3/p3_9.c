#include <stdio.h>
int main() {
	float price, interest, payment, total;
	int paymentsNumber;
	printf("Enter the prorduct price: ");
	scanf("%f", &price);
	printf("Enter the payments number: ");
	scanf("%d", &paymentsNumber);
	printf("Enter the interest: ");
	scanf("%f", &interest);
	total = price * (1 + interest / 100);
	payment = total / paymentsNumber;
	printf("The payment is: %.3f\n", payment);
	printf("Total payment is %.3f\n", total);
	return 0;
}
