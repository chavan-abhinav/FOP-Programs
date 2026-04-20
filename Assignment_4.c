#include<stdio.h>
int main()
{ float bs,hra,ta,gs,pt,ns;
  
  printf("Enter your Basic Pay:");
  scanf("%f",&bs);

  hra=0.01*bs;
  ta=0.05*bs;
  gs=bs+hra+ta;
  pt=0.02*gs;
  ns=gs-pt;

  printf("Your Net Salary is %f",ns);

return 0;
}
