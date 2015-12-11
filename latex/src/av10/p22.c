#include <stdio.h>
#define MAX 81

int main() {
    char line[MAX], *c;
    FILE *input, *output;
    if ((input = fopen("input.txt", "r")) == NULL) {
        printf("File input.txt could not be open.\n");
        return -1;
    }
    if ((output = fopen("output.txt", "w")) == NULL) {
        printf("File output.txt could not be open\n");
        return -1;
    }

    while ((fgets(line, MAX, input)) != NULL) {
        int count = strlen(line);
        fprintf(output, "%d \n%s", count, line);
    }
    fclose(input);
    fclose(output);
    return 0;
}
