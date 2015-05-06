#include <stdio.h>

int words(char *str) {
    int in_word = 0;
    int count = 0;
    while(*str) {
        if(isalnum(*str)) {
            in_word = 1;
        } else {
            if(in_word == 1) {
                count++;
            }
            in_word = 0;
        }
        str++;
    }
    if(in_word) count++;
    return count;
}

int words2(char *str) {
    char last = str[strlen(str) - 1];
    printf("END: %d %c", last, last);
    int count = 0;
    while(*(str + 1)) {
        if(isalnum(*str) && !isalnum(*(str + 1))) {
            count++;
        }
        ++str;
    }
    return count;
}

int main() {
    FILE* f;
    f = fopen("text.txt", "r");

    char row[200];
    int total = 0;
    int rows = 0;
    while(fgets(row, 200, f) != NULL) {
        int wc = words2(row);
        rows++;
        printf("%d : %d\n", rows, wc);
        total += wc;
    }
    printf("%d %d\n", total, rows);
    float avg = total * 1.0 / rows;
    int result = 0;
    //rewind(f);
    fclose(f);
    f = fopen("text.txt", "r");
    while(fgets(row, 500, f) != NULL) {
        int wc = words2(row);
        if(wc > avg) {
            ++result;
            printf("%s", row);
        }
    }
    printf("\nResult: %d\n", result);
    fclose(f);
    return 0;
}