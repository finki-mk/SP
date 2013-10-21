#include <stdio.h>
#define MAX 100
int main() {
    int a[MAX][MAX], n, i, j;
    printf("Vnesi dimenzii na matricata: \n");
    scanf("%d", &n);
    printf("Vnesi gi elementite na matricata: \n");
    for(i = 0; i < n; ++i)
        for(j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    for(i = 0; i < n - 1; ++i) {
        for(j = i + 1; j < n; ++j)  
            if(a[i][j] != a[j][i])
                break;
        if(i != j) break;
    }
    if(i == j)
        printf("Matricata e simetricna vo odnos na glavnata dijagonala\n");
    else
        printf("Matricata ne e simetricna vo odnos na glavnata dijagonala\n");
    return 0;
}

