#include <stdio.h>
int main() {
    int number, small, large;
    printf("Vnesete dvocifren number:");
    scanf("%d", &number);
    small = number % 10;
    large = number / 10;
    switch (large) {
    case 0:
        break;
    case 1:
        printf("one ");
        break;
    case 2:
        printf("twenty-");
        break;
    case 3:
        printf("thirty-");
        break;
    case 4:
        printf("fourty-");
        break;
    case 5:
        printf("fifty-");
        break;
    case 6:
        printf("sixty-");
        break;
    case 7:
        printf("seventy-");
        break;
    case 8:
        printf("eighty-");
        break;
    case 9:
        printf("ninety-");
        break;
    default:
        break;
    }
    switch (small) {
    case 0:
        printf("zero\n");
        break;
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
        break;
    case 5:
        printf("five\n");
        break;
    case 6:
        printf("six\n");
        break;
    case 7:
        printf("seven\n");
        break;
    case 8:
        printf("eight\n");
        break;
    case 9:
        printf("nine\n");
        break;
    default:
        break;
    }
    return (0);
}
