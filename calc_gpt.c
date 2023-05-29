#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int division(int a, int b);
int multiplication(int a, int b);

int main(void)
{
    unsigned int input, num1, num2;
    printf("\nWelcome to the Math Calculator!\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\n");
    scanf("%i", &input);
    printf("\n");

        do
        {
            switch (input)
            {
            case 1:
                printf("Enter your first integer: ");
                scanf("%d", &num1);
                printf("Enter your second integer: ");
                scanf("%d", &num2);
                printf("\nResults: %d + %d = %d\n\n", num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("Enter your first integer: ");
                scanf("%d", &num1);
                printf("Enter your second integer: ");
                scanf("%d", &num2);
                printf("\nResults: %d - %d = %d\n\n", num1, num2, subtraction(num1, num2));
                break;
            case 3:
                printf("Enter your first integer: ");
                scanf("%d", &num1);
                printf("Enter your second integer: ");
                scanf("%d", &num2);
                printf("\nResults: %d * %d = %d\n\n", num1, num2, multiplication(num1, num2));
                break;
            case 4:
                printf("Enter your first integer: ");
                scanf("%d", &num1);
                printf("Enter your second integer: ");
                scanf("%d", &num2);

                if (num1 == 0 || num2 == 0)
                {
                    printf("\nEnter a valid number\n\n");
                    continue;
                }
                else
                {
                printf("\nResults: %d / %d = %d\n\n", num1, num2, division(num1, num2));
                break;
                }
            default:
                printf("Thank you for using Math Calc!\n");
                break;
            }

        } while (input != 5);
    
    return 0;

}


int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int division(int a, int b)
{    
    return a / b;
}

int multiplication(int a, int b)
{
   return a * b;
}

