#include <stdio.h>
#define MAX 100
int main() {
    int a[MAX][MAX], n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j)
            if (a[i][j] != a[j][i])
                break;
        if (i != j) break;
    }
    if (i == j)
        printf("Matrix is symetric on the main diagonal\n");
    else
        printf("Matrix is not symetric on the main diagonal\n");
    return 0;
}

