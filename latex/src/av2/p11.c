#include <stdio.h>
int main() {
	int date;
	int day, month;
	printf("Enter date of birth: ");
	scanf("%d", &date);
	day = date / 1000000;
	month = (date / 10000) % 100;
	printf("Your date of birth is %02d.%02d\n", day, month);
	return 0;
}
