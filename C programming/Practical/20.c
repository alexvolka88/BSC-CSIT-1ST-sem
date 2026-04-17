#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main() {
    int result;

    result = sum(50);

    printf("Sum of first 50 natural numbers = %d\n", result);

    return 0;
}
