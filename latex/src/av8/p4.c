#include <stdio.h>

void bubbleSort(int *a, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
    }
}

void selectionSort(int niza[], int n, int m) {
    if (n - m == 1)
        return;
    else {
        int najmal = niza[m];
        int indeksNajmal = m;
        int i;
        for (i = m; i < n; ++i)
            if (niza[i] < najmal) {
                najmal = niza[i];
                indeksNajmal = i;
            }
        swap(&niza[m], &niza[indeksNajmal]);
        selectionSort(niza, n, m + 1);
    }
}

void insertionSort(int a[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        int temp = a[i];
        j = i - 1;
        while (temp < a[j] && j >= 0) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

void insert(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void print(int *a, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d\t", *(a + i));
    }
    printf("\n");
}
int main() {
    int a[MAX], n;
    printf("Vnesi dolzina na nizata: ");
    scanf("%d", &n);
    insert(a, n);
    bubbleSort(a, n);
    //selectionSort(a, n, 0);
    //insertionSort(a, n);
    print(a, n);
    return 0;
}