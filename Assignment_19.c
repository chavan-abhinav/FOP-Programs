#include <stdio.h>
#include <string.h>

#define MAX 50

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];       
    float salary;
};

// a) Total number of employees
void totalEmployees(int n) {
    printf("Total number of employees = %d\n", n);
}

// b) Count male and female employees
void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (strcasecmp(emp[i].gender, "Male") == 0)
            male++;
        else if (strcasecmp(emp[i].gender, "Female") == 0)
            female++;
    }
    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);
}

// c) Employees with salary more than 10,000
void highSalary(struct EMPLOYEE emp[], int n) {
    printf("Employees with salary more than 10000: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000) {
            printf("%s ", emp[i].name);
            found = 1;
        }
    }
    if (!found)
        printf("None");
    printf("\n");
}

// d) Employees with designation "Asst Manager"
void asstManagers(struct EMPLOYEE emp[], int n) {
    printf("Employees with designation AsstManager: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcasecmp(emp[i].designation, "AsstManager") == 0) {
            printf("%s ", emp[i].name);
            found = 1;
        }
    }
    if (!found)
        printf("None");
    printf("\n");
}

int main() {
    int n;
    struct EMPLOYEE emp[MAX];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Employee %d: ", i + 1);
        scanf("%s %s %s %s %f",
              emp[i].name,
              emp[i].designation,
              emp[i].gender,
              emp[i].doj,
              &emp[i].salary);
    }

    totalEmployees(n);
    countGender(emp, n);
    highSalary(emp, n);
    asstManagers(emp, n);

    return 0;
}
