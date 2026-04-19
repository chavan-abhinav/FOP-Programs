#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,temp,n;

    printf("Enter the number:");
    scanf("%d",&num);

    
if(num < 0){
        printf("-");          
        temp = abs(num);      
    }
    else{
        temp = num;
    }

    while(temp != 0){
        n = temp % 10;
        printf("%d", n);
        temp = temp / 10;
    }

    return 0;
}
   




