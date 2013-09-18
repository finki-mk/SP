#include <stdio.h>
int main() {
    int godina;
    printf ("Vnesete ja godinata: \n");
    scanf ("%d", &godina);
    if ((godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0)
        printf("%d godina e prestapna.\n", godina);
    else
        printf("%d godina ne e prestapna.\n", godina);
    return 0;
}