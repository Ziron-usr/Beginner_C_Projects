#include <stdio.h>

/* Write a program that takes an integer as input 
and prints all the even numbers from 2 
to the input number using a while loop. */

int main(void)
{
    int input;
    int i = 2;

    printf("\nEnter desired integer: ");
    scanf("%i", &input);
    printf("\n");

    while (i <= input)
    {
        printf("%i ", i);
        i = i + 2;
    }
    
    printf("\n\n");
    return 0;
    
}