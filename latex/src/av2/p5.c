#include <stdio.h>
int main() {
	int x, y, z;
	printf("Vnesete x i y, soodvetno: ");
	scanf("%d%d", &x, &y);
	z = x++ + --y + (x < y);
	printf("z = %d\n", z);
	return 0;
}
