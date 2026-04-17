#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length manually
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
