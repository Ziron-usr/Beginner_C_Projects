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
    printf("What would you like to do? ");
    //printf("(| + | - | / | * |)\n");
    scanf(" %c", &opp);

    if (opp == '+')
    {
        plus = (num1 + num2);
        printf("%s, your answer is: %d\n\n", name, plus); 
    }
    else if (opp == '-')
    {
        minus = (num1 - num2);
        printf("%s, your answer is: %d\n\n", name, minus);
    }
    else if (opp == '*')
    {
        mult = (num1 * num2);
        printf("%s, your answer is: %d\n\n", name, mult);
    }
    else if (opp == '/')
    {
        divd = (num1 / num2);
        printf("%s, your answer is: %d\n\n", name, divd);
    }
    else
    {
        printf("Invalid Input\n");
    }


}

