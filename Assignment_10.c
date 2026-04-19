#include<stdio.h>
int main(){

int num_1,num_2,result,choice;
int count;

printf("1)+\n2)-\n3)*\n4)/\n5)x^y\n6)x!\n");


printf("Operation:");

scanf("%d",&choice);


switch(choice){
    
    case 1:
        printf("Enter the Numbers:");
        scanf("%d %d",&num_1,&num_2);
        result=num_1+num_2;
        break;
    
    case 2:
        printf("Enter the Numbers:");
        scanf("%d %d",&num_1,&num_2);
        result=num_1-num_2;
        break;

    case 3:
        printf("Enter the Numbers:");
        scanf("%d %d",&num_1,&num_2);
        result=num_1*num_2;
        break;

    case 4:
        printf("Enter the Numbers:");
        scanf("%d %d",&num_1,&num_2);
        if (num_2!=0){
            result=num_1/num_2;
        }
        else{
            printf("Division by zero error");
        }
        break;

    case 5:
        printf("Enter the Numbers:");
        scanf("%d %d",&num_1,&num_2);
        result=1;
        count=0;
        while(count<num_2){
            result=result*num_1;
            count++;
        }
        break;

    case 6:
        printf("Enter the number:");
        scanf("%d",&num_1);

        if ((num_1==1)||(num_1==0)){
            result=1;
        }
        else{
            count=1;
            result=1;
            while(count<=num_1){
                result=result*count;
                count++;
            }
        break;
        }
    default:
            printf("Operartion not defined");
    }

printf("%d",result);

return 0;
}

    



