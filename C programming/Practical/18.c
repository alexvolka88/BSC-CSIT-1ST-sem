
#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) {

        // print spaces
        for (j = 5; j > i; j--) {
            printf("  ");
        }

        // print numbers
        for (k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
