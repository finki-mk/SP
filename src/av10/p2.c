#include <stdio.h>
#define MAX 81

int main(int argc, char *argv[]) {
    char line[MAX], *c;
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
        int count = strlen(line);
        fprintf(output, "%d %s", count, line);
    }
    fclose(input);
    fclose(output);
    return 0;
}
