#include <stdio.h>
#define MAX 81

int main(int argc, char *argv[]) {
    char line[MAX], *c;
    FILE *input, *output;
    if ((input = fopen("input.txt", "r")) == NULL) {
        printf("File %s could not be open.\n", argv[1]);
        return -1;
    }
    if ((output = fopen("output.txt", "w")) == NULL) {
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
