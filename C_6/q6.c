#include <stdio.h>
int main() {
   int count,init = 0,final = 1,plus;
   printf("Enter number");
    scanf("%d",&count);
    for(int i= 0;i<count;i++){
     if(i<=1 ){
       final = i;
     }
     else{
      plus = init + final ;
      init = final ;
      final= plus;
     }

   printf("%d\n",final);
}
return 0;

}
// The while loop will be most suitable beacause we do not know how many times the loop should run.