#include <stdio.h>

int main() {
    int choice, count = 0, enteredPIN, PIN = 1234, attempts = 0, i;
    float balance = 5000.00, amount;

    // 2) PIN Authentication
    while (attempts < 3) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPIN);
        
        if (enteredPIN == PIN) {
            printf("PIN Accepted. Welcome!\n");
            break;
        } else {
            attempts++;
            if (attempts < 3)
                printf("Wrong PIN. %d attempt(s) remaining.\n", 3 - attempts);
            else {
                printf("Card blocked. Too many failed attempts.\n");
                return 1;
            }
        }
    }

    // 1) Card Insertion and Reading + 3) Deposit & Withdrawal + 4) Receipt
    do {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                count++;
                break;

            // 3) Deposit
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited %.2f. New Balance: %.2f\n", amount, balance);
                    count++;
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            // 3) Withdrawal
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn %.2f. New Balance: %.2f\n", amount, balance);
                    count++;
                } else {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 4:
                // 4) Transaction Receipt
                printf("\n--- Transaction Receipt ---\n");
                if (count == 0) {
                    printf("No transactions performed.\n");
                } else {
                    for (i = 1; i <= count; i++) {
                        printf("Transaction %d completed.\n", i);
                    }
                }
                printf("Final Balance: %.2f\n", balance);
                printf("Thank you. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}