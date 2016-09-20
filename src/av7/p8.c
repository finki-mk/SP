#include <stdio.h>
int min_element(int array[], int n);
int main() {
    int i, n, a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Smallest element is: %d \n", min_element(a, n - 1));
    return 0;
}
int min_element(int array[], int n) {
    if (n == 0)
        return array[n];
    else {
        int temp = min_element(array, n - 1);
        if (array[n] < temp)
            return array[n];
        return temp;
    }
}
