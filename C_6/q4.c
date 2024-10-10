#include <stdio.h>
int main() {
   int num = 1,add;
    printf("Enter a number");
   while(num != 0){
     printf("Enter a number");
     scanf("%d",&num);
    add += num;
   }
   printf("%d is the count",add);
    return 0;
}

// The while loop will be most suitable beacause we do not know how many times the loop should run.