#include <stdio.h>

// Function to calculate factorial
long fact(int n) {
    int i;
    long f = 1;

    for (i = 1; i <= n; i++) {
        f = f * i;
    }

    return f;
}

int main() {
    int num;
    long result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = fact(num);

    printf("Factorial of %d = %ld\n", num, result);

    return 0;
}
