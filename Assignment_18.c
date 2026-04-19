#include<stdio.h>
#include<string.h>

int main(){
    char str_1[20];
    char str_2[20];
    char reversed[20];

    int length, i, compare;

    // 1)Input
    printf("Enter a string: ");
    scanf("%s", str_1);

    printf("Enter another string for equality check: ");
    scanf("%s", str_2);

    // 2)Length
    length = strlen(str_1);
    printf("\nLength of string = %d\n", length);

    // 3)Reversal
    printf("Reversed string = ");
    i = length - 1;
    int j = 0;
    while(i >= 0){
        reversed[j] = str_1[i];
        printf("%c", str_1[i]);
        i--;
        j++;
    }
    reversed[j] = '\0';
    printf("\n");

    // 4)Palindrome
    if(strcmp(str_1, reversed) == 0)
        printf("The string is a Palindrome\n");
    else
        printf("The string is NOT a Palindrome\n");

    // 5)Equality
    compare = strcmp(str_1, str_2);
    if(compare == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // 6)Substring
    if(strstr(str_1, str_2) != NULL)
        printf("Substring found in main string\n");
    else
        printf("Substring NOT found in main string\n");

    return 0;
}