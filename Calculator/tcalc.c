#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[3];
    
    printf("\nHello! My name is Tom. Your personal assistant.\n");
    printf("\nPlease enter your name: ");
    scanf("%s", name);
    printf("\nHello, %s!\n\n", name);

    int num1, num2;
    char plus, minus, mult, divd;
    char opp;

    printf("What is your first number?: ");
    scanf("%d", &num1);

    printf("What is your second number? ");
    scanf("%d", &num2);

    printf("What would you like to do?\n");
    printf("(+ | - | / | *)\n");
    scanf(" %c", &opp); // added space before %c to consume the newline character

    if (opp == '+')
    {
        plus = (num1 + num2);
        printf("%d\n", plus); // use %d to print integer value of plus
    }
    else 
    {
        printf("Invalid Input\n");
    }

    return 0; // added return statement
}
