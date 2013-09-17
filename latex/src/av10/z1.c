#include <stdio.h>
#define MAX 100

int broiZnak(char *str, char znak) {
	int vkupno = 0;
	while (*str != '\0') {
		vkupno += (*str == znak);
		str++;
	}
	return vkupno;
}

int main() {
	char s[MAX], znak;
	printf("Vnesete string:");
	gets(s);
	printf("Vnesete znak koj treba da se bara vo vneseniot sting: \n");
	znak = getchar();
	printf("Vo vneseniot string \"%s\", znakot \"%c\" se pojavuva vkupno %d pati.\n", s, znak, broiZnak(s, znak));
    return 0;
}

