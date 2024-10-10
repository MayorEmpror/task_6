#include <stdio.h>
int main(){
    int temp,num,fact = 1 ;
  
      printf("enter a number");
      scanf("%d",&num);
        temp = num;       
        while(temp!=0){
            fact *= temp;
            temp -= 1 ;
        }
      printf("%d\n",fact);
    return 0;
}