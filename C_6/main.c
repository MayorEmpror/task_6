#include <stdio.h>
int Question_1 (){
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

int Question_2(){
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
int Question_3(){
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

int Question_4(){
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

int Question_5(){
    int num,count_factors;
   count_factors = 0;
   printf("Enter a number");
   scanf("%d",&num);
   for(int i = 1;i<=num;i++){
    if(num%i==0){
       count_factors += 1;
    }
   }
   if(count_factors <= 2) {
    printf("%d is a prime number; it has %d factors",num,count_factors);
   }else printf("the number is not prime");
   return 0;
}


int Question_6(){
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


int is_armstrong_number(int num) {
    int original_num = num;
    int sum_of_cubes = 0;
    
    // Calculate the sum of the cubes of its digits
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        sum_of_cubes += digit * digit * digit; // Add the cube of the digit
        num /= 10; // Remove the last digit
    }
    
    // Check if the sum of cubes is equal to the original number
    printf("%d is the cube sum of orginal number ",sum_of_cubes);
    return sum_of_cubes == original_num;
}


int Question_7(){
  int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (is_armstrong_number(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

int main(){
    int num_q;
    printf("Which question do you want to check");
    scanf("%d",&num_q);
    switch (num_q)
    {
    case 1:
        Question_1();
        break;
    case 2: 
        Question_2();
        break;
    case 3:
         Question_3();
         break;
    case 4:
         Question_4();
         break;
    case 5: 
         Question_5();
         break;
           case 6: 
         Question_6();
         break;
           case 7: 
         Question_7();
         break;
    }
    return 0;

}