#include <stdio.h>

int main() {
	char c, prev, maxChar;
	int first = 1;
	int max = 0, n = 1;
	while (1) {
		scanf("%c", &c);
		if (c == '.') {
			break;
		}
		if (first) {
			first = 0;
		} else {
			if (c == prev) {
				n++;
			} else {
				if (n > max) {
					max = n;
					maxChar = prev;
				}
				n = 1;
			}
		}
		prev = c;
	}
	if (n > max) {
		max = n;
		maxChar = prev;
	}
	printf("%c %d\n", maxChar, max);
	return 0;
}
