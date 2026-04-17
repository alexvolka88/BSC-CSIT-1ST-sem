//WAP to perform string operations: length, copy, and concatenation of two strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100], concat[200];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Length
    printf("\nLength of first string = %lu", strlen(str1));
    printf("\nLength of second string = %lu\n", strlen(str2));

    // Copy
    strcpy(copy, str1);
    printf("\nCopied string = %s\n", copy);

    // Concatenation
    strcpy(concat, str1);
    strcat(concat, str2);
    printf("\nConcatenated string = %s\n", concat);

    return 0;
}
