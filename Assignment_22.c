#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    
        printf("1. Length of strings\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Reverse a string\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of \"%s\" = %lu\n", str1, strlen(str1));
                printf("Length of \"%s\" = %lu\n", str2, strlen(str2));
                break;

            case 2: {
                char copy[100];
                strcpy(copy, str1);
                printf("Copied string: %s\n", copy);
                break;
            }

            case 3: {
                char concat[200];
                strcpy(concat, str1);
                strcat(concat, str2);
                printf("Concatenated string: %s\n", concat);
                break;
            }

            case 4: {
                int result = strcmp(str1, str2);
                if (result == 0)
                    printf("Strings are equal.\n");
                else if (result < 0)
                    printf("\"%s\" is less than \"%s\"\n", str1, str2);
                else
                    printf("\"%s\" is greater than \"%s\"\n", str1, str2);
                break;
            }

            case 5: {
                char rev[100];
                strcpy(rev, str1);
                
                int len = strlen(rev);
                for (int i = 0; i < len / 2; i++) {
                    char temp = rev[i];
                    rev[i] = rev[len - 1 - i];
                    rev[len - 1 - i] = temp;
                }
                printf("Reversed \"%s\": %s\n", str1, rev);
                break;
            }

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }



    return 0;
}