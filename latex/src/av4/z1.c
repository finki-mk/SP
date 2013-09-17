#include <stdio.h>
int main() {
    int a, b;
	printf("Vnesete gi vrednostite na a i b: \n"); 
	scanf("%d %d", &a, &b);
	if(a > b)
	    printf("Vrednosta na maksimumot e %d.\n", a); 
	else 
	    printf("Vrednosta na maksimumot e %d.\n", b); 
	return 0; 
}

