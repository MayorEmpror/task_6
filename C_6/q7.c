#include <stdio.h>

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


int main() {
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
