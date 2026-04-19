#include<stdio.h>
int main()
{
int aggr,m1,m2,m3,m4,m5;

printf("Enter your Physics marks:");
scanf("%d",&m1);

printf("Enter your Chemistry marks:");
scanf("%d",&m2);

printf("Enter your English marks:");
scanf("%d",&m3);

printf("Enter your Maths marks:");
scanf("%d",&m4);

printf("Enter your C-Programming marks:");
scanf("%d",&m5);

if(m1,m2,m3,m4,m5>=40)
{printf("PASS.\n");
 aggr=(m1+m2+m3+m4+m5)/5;
 
 if(aggr>=75){

 printf("Distinction");
 }
 else if(60<=aggr<75)
 {printf("First Division");}
 else if(50<=aggr<60)
 {printf("Second Division");}
 else
 {printf("Third Division");
 }

}
else
{printf("FAIL.");
}
return 0;}              