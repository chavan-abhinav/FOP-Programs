#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nRoll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        s[i].total = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = (s[i].total / 300) * 100;
    }

    printf("\nStudent Result:\n");
    for (int i = 0; i < n; i++) {
        printf("\nRoll No: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %.0f\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}