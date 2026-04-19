#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int even_count = 0, odd_count = 0;

    printf("Enter integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }

    printf("Even numbers are: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd numbers are: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}