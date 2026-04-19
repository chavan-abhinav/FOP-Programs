#include <stdio.h>


void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}


void swapByPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    swapByValue(a, b);
    printf("After swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);  


    swapByPointer(&x, &y);
    printf("After swapping with pointers:\n");
    printf("x = %d y = %d\n", x, y);  

    return 0;
}