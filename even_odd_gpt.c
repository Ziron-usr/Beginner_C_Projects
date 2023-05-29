#include <stdio.h>

/* Write a program that takes a positive integer as input 
and determines whether it is an even number or an odd number. 
Print an appropriate message indicating whether the input is even or odd. */


int main(void)
{
    int input;

    printf("Enter a positive integer: ");
    scanf("%i", &input);

    if (input > 0)
    {
        if (input % 2 == 0)
        {
        printf("\nYour integer is Even!\n\n");
        return 0;
        }
        else if (input % 2 == 1)
        {
            printf("\nYour integer is Odd!\n\n");
            return 0;
        }
        else
        {
            printf("\nSomethings not right...\n\n");
            return 1;
        }

    }
    else
    {
        printf("\nInvalid Input\n\n");
        return 1;
    }

}