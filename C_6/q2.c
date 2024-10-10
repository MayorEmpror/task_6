#include <stdio.h>
int main(){
    int temp,num;
    int fact = 0;
      printf("enter a number");
      scanf("%d",&num);
    if(num>=1){      
       for(int i = 1; i<=num;i++){
         if(i%2==0){
            printf("%d\n",i);
            fact += 1;}}     
    }else printf("Number should be greater than or equal to 1");
        printf("%d even numbers ",fact);
    return 0;
}