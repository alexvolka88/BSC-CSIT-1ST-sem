#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Forward order: %d %d %d\n", a, b, c);
    printf("Reverse order: %d %d %d\n", c, b, a);

    return 0;
}
