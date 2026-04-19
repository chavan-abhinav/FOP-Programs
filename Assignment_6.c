#include<stdio.h>

/*1)Finding factorial with recursion*/

int factorial(int fact){
    if(fact==1 || fact==0){
        return  1;}
    else{
        return fact*factorial(fact-1);
    }
}
/*2)Finding factorial without recursion*/

int main(){

    int fact,i,result=1;

    printf("Enter the number:");
    scanf("%d",&fact);


    if(fact<0){
        printf("The factorial is not defined for negative numbers.");
        return 0;

    }

    else
    {
            for(i=1;i<=fact;i++){
                result=result*i;
    }
}

    printf("\nThe factorial of %d is:%d(without recursion)",fact,result);

    printf("\nThe factorial of %d is:%d(with recursion)",fact,factorial(fact));

    return 0;
}