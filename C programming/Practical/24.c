#include <stdio.h>

int main() {
    int a[3][2], b[3][2], sum[3][2];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 3x2 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x2 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Adding matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display resultant matrix
    printf("\nResultant 3x2 matrix after addition:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
