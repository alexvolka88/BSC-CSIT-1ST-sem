#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str[100], temp[100];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    // Dynamic memory allocation for each string
    for(i = 0; i < n; i++) {
        str[i] = (char *)malloc(100 * sizeof(char));
        printf("Enter string %d: ", i + 1);
        scanf("%s", str[i]);
    }

    // Sorting strings using strcmp
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // Display sorted strings
    printf("\nSorted strings:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    // Free memory
    for(i = 0; i < n; i++) {
        free(str[i]);
    }

    return 0;
}
