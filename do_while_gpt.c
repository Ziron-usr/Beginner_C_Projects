#include <stdio.h>

/* Write a program that takes a positive integer as input
and calculates the sum of all the digits in the number 
using a do-while loop. Print the sum. */

int main(void)
{
    int input;
    int sum = 0;
    int digit;

    printf("Enter a positive integer: ");
    scanf("%d", &input);
    printf("\n");

    do
    {
        digit = input % 10;  // Extract the rightmost digit
        sum += digit;       // Add the digit to the sum
        input /= 10;        // Remove the rightmost digit from the input
    }
    while (input > 0);

    printf("The sum of the digits is: %d\n\n", sum);

    return 0;
}
