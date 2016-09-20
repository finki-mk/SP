#include <stdio.h>
#include <string.h>
#define MAX 100
int is_is_palindrome(char *str) {
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++)
        if (*(str + i) != *(str + len - 1 - i))
            return 0;;
    return 1;
}
// RECURSIVE
int is_pal(char *str, int start, int end) {
    if (start >= end) return 1;
    if (str[start] == str[end])
        return is_pal(str, start + 1, end - 1);
    return 0;
}

int main() {
    char s[MAX];
    gets(s);
    printf("%s ", s);
    if (is_pal(s, 0, strlen(s) - 1))
        printf("is palindrome.");
    else
        printf("is NOT palindrome.");
    return 0;
}