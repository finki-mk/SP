#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i, maxPoeni = 0, maxIndeks = 0;
	int vkupno, pobedi, nereseni, porazi;
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &pobedi, &nereseni, &porazi);
		int poeni = pobedi * 3 + nereseni;
		if (poeni > maxPoeni) {
			maxPoeni = poeni;
			maxIndeks = i;
		}
	}
	vkupno = pobedi + nereseni + porazi;
	printf("Maksimalen broj na osvoeni poeni: %d\n", maxPoeni);
	printf("Reden broj na ekipata: %d\n", maxIndeks + 1);
	if (maxPoeni * 100.0 / (vkupno * 3) > 75) {
		printf("Odlicna sezona\n");
	} else {
		printf("Losa sezona\n");
	}
	return 0;
}
