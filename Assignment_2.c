#include<stdio.h>
int main()
{ int choice,num1,num2,result;
  printf("Arithmetic Operations:1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
  printf("Choose Operation:");
  scanf("%d",&choice);
  printf("Enter the numbers:");
  scanf("%d %d",&num1,&num2);
  
switch(choice)
{ case 1:
    result=num1+num2;
    printf("Addition of numbers is:%d",result);
    break;

  case 2:
    result=num1-num2;
    printf("Subtraction of numbers is:%d",result);
    break;

  case 3:
    result=num1*num2;
    printf("Multiplication of numbers is:%d",result);
    break;

  case 4:
    if(num2!=0){

    result=num1/num2;
    printf("Division of numbers is:%d",result);
    break;
    }
    else
    {printf("Division by zero error");
     break;
    }

  default:
    printf("Invalid choice");
}
return 0;
}

