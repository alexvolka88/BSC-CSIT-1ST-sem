#include <stdio.h>

int main() {
    float p, t, r, si;

    printf("Enter Principal, Time and Rate: ");
    scanf("%f %f %f", &p, &t, &r);

    si = (p * t * r) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}
