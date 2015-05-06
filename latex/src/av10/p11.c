#include <stdio.h>

int is_letter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int is_vowel(char c) {
    c = tolower(c);
    switch (c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return 1;
    default:
        return 0;
    }
}

int main() {
    char c;
    int count_consonats = 0, count_vowels = 0;
    FILE *dat;
    // Opening file
    if ((dat = fopen("text.txt", "r")) == NULL) {
        printf("The file %s cannot be open.\n", argv[1]);
        return -1;
    }
    // Reading char by char until the EndOfFile (EOF)
    while ((c = fgetc(dat)) != EOF) {
        if (is_letter(c)) {
            if (is_vowel(c))
                count_vowels++;
            else
                count_consonats++;
        }
    }
    fclose(dat);
    printf("Ratio vowel/consonats: %d/%d = %5.2f\n", count_vowels, count_consonats,
           (float) count_vowels / count_consonats);
    return 0;
}