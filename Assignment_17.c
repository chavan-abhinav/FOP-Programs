#include <stdio.h>

int main() {
    double x, sum = 0.0, term;
    int n;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = x;  

    for (int i = 0; i < n; i++) {
        sum += term;
        
        term *= (-1) * (x * x) / ((2 * i + 2) * (2 * i + 3));
    }

    printf("Sum of sine series = %lf\n", sum);
    return 0;
}