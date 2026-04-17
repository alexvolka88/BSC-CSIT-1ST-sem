#include <stdio.h>

struct Employee {
    char name[50];
    char address[100];
    int age;
    float salary;
};

int main() {
    struct Employee e[100];
    int n, i;
    float totalSalary = 0, avgSalary;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Address: ");
        scanf(" %[^\n]", e[i].address);

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        totalSalary += e[i].salary;
    }

    avgSalary = totalSalary / n;

    printf("\nAverage Salary = %.2f\n", avgSalary);

    return 0;
}
