#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void filter(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            if (islower(str[i]))
                str[j] = toupper(str[i]);
            else
                str[j] = tolower(str[i]);
            j++;
        }
        i++;
    }
    str[j] = '\0';
}
int main() {
    char s[MAX];
    gets(s);
    filter(s);
    printf("%s\n", s);
    return 0;
}
