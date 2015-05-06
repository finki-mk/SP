# include <stdio.h>
# define MAX 100
int main () {
    int a[MAX][MAX], n, i, j, flag = 0;
    printf ("Read the matrix dimensions: \n");
    scanf ("%d", &n);
    printf ("Read the matrix elements: \n");
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j)
            scanf ("%d", &a[i][j]);
    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j)
            if (a[i][j] != a[j][i]) {
                flag = 1;
                break;
            }
        if (flag) break;
    }
    if (!flag)
        printf ("Matrix is SYMETRIC on the main diagonal\n");
    else
        printf ("Matrix is NOT SYMETRIC on the main diagonal\n");
    return 0;
}