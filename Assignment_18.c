#include <stdio.h>

int main() {
    char str_1[20];
    char str_2[20];
    char reversed[20];

    int length = 0, i, j, compare = 0;
    int isEqual = 1, isSubstring = 0;


    printf("Enter a string: ");
    scanf("%s", str_1);

    printf("Enter another string for equality check: ");
    scanf("%s", str_2);

    
    while (str_1[length] != '\0') {
        length++;
    }
    printf("\nLength of string = %d\n", length);

    //  Reversal
    printf("Reversed string = ");
    i = length - 1;
    j = 0;

    while (i >= 0) {
        reversed[j] = str_1[i];
        printf("%c", str_1[i]);
        i--;
        j++;
    }
    reversed[j] = '\0';
    printf("\n");

    //  Palindrome
    i = 0;
    while (str_1[i] != '\0' && reversed[i] != '\0') {
        if (str_1[i] != reversed[i]) {
            isEqual = 0;
            break;
        }
        i++;
    }

    if (isEqual == 1 && str_1[i] == '\0' && reversed[i] == '\0')
        printf("The string is a Palindrome\n");
    else
        printf("The string is NOT a Palindrome\n");

    // 5) Equality 
    i = 0;
    isEqual = 1;

    while (str_1[i] != '\0' || str_2[i] != '\0') {
        if (str_1[i] != str_2[i]) {
            isEqual = 0;
            break;
        }
        i++;
    }

    if (isEqual == 1)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    //  Substring
    for (i = 0; str_1[i] != '\0'; i++) {
        int k = i;
        j = 0;

        while (str_2[j] != '\0' && str_1[k] == str_2[j]) {
            k++;
            j++;
        }

        if (str_2[j] == '\0') {
            isSubstring = 1;
            break;
        }
    }

    if (isSubstring == 1)
        printf("Substring found in main string\n");
    else
        printf("Substring NOT found in main string\n");

    return 0;
}
