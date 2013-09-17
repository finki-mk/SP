#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX][MAX], n, m, i, j, sumKol=0, sumRed=0;
    printf("Vnesi dimenzii na matricata: \n");
    scanf("%d %d",&n, &m);
    printf("Vnesi gi elementite na matricata: \n");
    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
            scanf("%d",&a[i][j]);

    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
        {
            if((j+1)%2)
                sumKol+=a[i][j];
            if(!((i+1)%2))
                sumRed+=a[i][j];
        }
    printf("Razlikata na zbirot na elementite od neparnite koloni so zbirot na elementite od parnite redici e %d",sumKol-sumRed);

    return 0;
}
