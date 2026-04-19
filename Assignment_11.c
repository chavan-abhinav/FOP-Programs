#include<stdio.h>
#include<math.h>

int main(){

    int num_1, result = 0, choice, count, i, isPrime;

    printf("Operation:\n1)Square Root\n2)Square\n3)Cube\n4)Prime Number Check\n5)Prime factors\n6)Factorial\n");

    scanf("%d",&choice);

    printf("Enter the Number:");
    scanf("%d",&num_1);

    switch(choice){
        
        case 1:
            result = sqrt(num_1);
            printf("Square Root = %d", result);
            break;
        
        case 2:
            result = num_1 * num_1;
            printf("Square = %d", result);
            break;

        case 3:
            result = num_1 * num_1 * num_1;
            printf("Cube = %d", result);
            break;

        case 4:
            isPrime = 1;

            if(num_1 <= 1){
                isPrime = 0;
            }
            else{
                for(count = 2; count < num_1; count++){
                    if(num_1 % count == 0){
                        isPrime = 0;
                        break;
                    }
                }
            }

            if(isPrime == 1){
                printf("%d is a Prime Number.", num_1);
            }
            else{
                printf("%d is not a Prime Number.", num_1);
            }
            break;

        case 5:
            printf("Prime factors are: ");
            for(count = 2; count <= num_1; count++){
                if(num_1 % count == 0){

                    isPrime = 1;
                    for(i = 2; i < count; i++){
                        if(count % i == 0){
                            isPrime = 0;
                            break;
                        }
                    }

                    if(isPrime == 1){
                        printf("%d ", count);
                    }
                }
            }
            break;

        case 6:
            if(num_1 == 0 || num_1 == 1){
                result = 1;
            }
            else{
                result = 1;
                for(count = 1; count <= num_1; count++){
                    result = result * count;
                }
            }
            printf("Factorial = %d", result);
            break;

        default:
            printf("Operation not defined");
    }

    return 0;
}