#include <stdio.h>
#define MAX 81

int main(int argc, char *argv[]) {
    char line[MAX], *c;
    int in_word = 0, words_count = 0;
    FILE *input, *output;
    if (argc < 3) {
        printf("Usage: %s [input_filename] [output_filename]\n",
               argv[0]);
        return -1;
    }
    if ((input = fopen(argv[1], "r")) == NULL) {
        printf("File %s could not be open.\n", argv[1]);
        return -1;
    }
    if ((output = fopen(argv[2], "w")) == NULL) {
        printf("File %s could not be open\n", argv[2]);
        return -1;
    }

    while ((fgets(line, MAX, input)) != NULL) {
        c = line;
        in_word = 0;
        words_count = 0;
        while (*c != '\0') {
            if (isalnum(*c)) {
                if (!in_word)
                    in_word = 1;
            } else if (in_word) {
                in_word = 0;
                words_count++;
            }
            c++;
        }
        if (in_word)
            words_count++;
        fprintf(output, "%d %s", words_count, line);
    }
    fclose(input);
    fclose(output);
    return 0;
}
