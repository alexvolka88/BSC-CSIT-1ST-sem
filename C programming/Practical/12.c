#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find largest
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    // Find smallest
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    // Display largest
    printf("Largest = %d is %s\n", largest,
           (largest % 2 == 0) ? "Even" : "Odd");

    // Display smallest
    printf("Smallest = %d is %s\n", smallest,
           (smallest % 2 == 0) ? "Even" : "Odd");

    return 0;
}
