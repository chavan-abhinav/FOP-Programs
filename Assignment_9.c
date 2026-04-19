#include<stdio.h>
int main()
{int temp,num,sum=0,digit;
 printf("Enter the number:");
 scanf("%d",&num);

 temp=num;

 while(temp!=0)
 {digit=temp%10;
  sum=sum+(digit*digit*digit);
  temp=temp/10;
 }
 if (sum==num)
 {printf("%d is an Armstrong Number.",num);
 }
 else
 {printf("%d is not an Armstrong Number.",num);
 }
 return 0;
}
