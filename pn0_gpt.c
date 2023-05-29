#include <stdio.h>

/* Write a program that takes an integer as input and checks if it 
is positive, negative, or zero. Print an appropriate message based on the input. */

int main(void)
{
    int input;

    printf("\nEnter an integer: ");
    scanf("%i", &input);
    printf("\n");

    if (input > 0)
    {
        printf("Your integer is Positive.\n\n");
    }
    else if (input < 0)
    {
        printf("Your integer is Negative.\n\n");
    }
    else if (input == 0)
    {
        printf("Your ineger is Zero.\n\n");
    }
    else if
    {
        printf("\nInvalid Input\n\n");
        return 1;
    }

   return 0;

}