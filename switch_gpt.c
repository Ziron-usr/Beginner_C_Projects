#include <stdio.h>

/* Write a program that takes a character as input and checks 
if it is a vowel (a, e, i, o, u) or a consonant. 
Print an appropriate message based on the input. */

int main(void)
{
    char vowel;
    printf("Enter a letter: ");
    scanf("%c", &vowel);
    printf("\n");

    switch (vowel)
    {
        case 'A':
            printf("Your input is a vowel.\n");
            break;
        case 'E':
            printf("Your input is a vowel.\n");
            break;
        case 'I':
            printf("Your input is a vowel.\n");
            break;
        case 'O':
            printf("Your input is a vowel.\n");
            break;
        case 'U':
            printf("Your input is a vowel.\n");
            break;
        default:
            printf("Your input is a consonant.\n");
            break;
    }

    return 0;
}