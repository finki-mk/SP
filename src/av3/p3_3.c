#include <stdio.h>
int main() {
	char c;
	printf("Enter uppercase letter: ");
	scanf("%c", &c);
	printf("%c lowercase is %c\n", c, c + ('a' - 'A'));
	return 0;
}
