#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter coefficients a, b and c: ");
    
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Quadratic equation is: ");

    // Print a
    if (a == 1)
        printf("x^2 ");
    else if (a == -1)
        printf("-x^2 ");
    else
        printf("%gx^2 ", a);

    // Print b
    if (b > 0)
        printf("+ %gx ", b);
    else if (b < 0)
        printf("- %gx ", -b);

    // Print c
    if (c > 0)
        printf("+ %g ", c);
    else if (c < 0)
        printf("- %g ", -c);

    printf("= 0\n");

    return 0;
}
