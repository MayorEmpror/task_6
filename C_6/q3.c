#include <stdio.h>
int main() {
   int num;
    do {
         printf("enter a positive number");
         scanf("%d",&num);
       if(num<0){
          printf("no\n");
       }
    }while (num <0);
    return 0;
}

