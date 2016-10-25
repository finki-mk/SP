#include<stdio.h>
#define MAX 100
int main() {
    int a[MAX][MAX], n, i, j, max, min;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
            if (i == 0 && j == 0)
                max = min = a[i][j];
            else if (max < a[i][j])
                max = a[i][j];
            else if (min > a[i][j])
                min = a[i][j];
        }

    for (i = 0; i < n; ++i)
        a[i][i] = max - min;

    for (i = 0; i < n; ++i) {
        printf("\n");
        for (j = 0; j < n; ++j)
            printf("%d\t", a[i][j]);
    }
    return 0;
}
