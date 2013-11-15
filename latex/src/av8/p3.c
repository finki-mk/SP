#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 1000000

int linearSearch(int *a, int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (*(a + i) == key) return i;
    }
    return -1;
}
int binarySearch(int *a, int n, int key) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (*(a + mid) == key) return mid;
        else if (*(a + mid) > key) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}


int main() {
    int i;
    int *a = malloc(sizeof(int) * MAX);
    for (i = 0; i < MAX; i++) {
        *(a + i) = i + 1;
    }
    srand(time(NULL));
    int key = rand() % MAX + 1;
    printf("Element shto se bara: %d\n", key);
    int found = linearSearch(a, MAX, key);
    printf("Najden so linearno preberavanje na pozicija: %d\n", found);
    found = binarySearch(a, MAX, key);
    printf("Najden so binarno preberavanje na pozicija: %d\n", found);
    return 0;
}