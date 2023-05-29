#include <stdio.h>
#include <string.h>

// The goal is to find a working option to store cryllic symbols

int main(void)
{
    printf(
    "\xD1\x8F");
    printf("\n");
    return 0;
}

/*{
    char a[] = u8"а"; // use UTF-8 encoding
    printf("%s\n", a);
    return 0;
}*/


/*int main(void)
{

    char a = '\u0430';
    printf("%c\n", a);






    char c;

    printf("Enter text: ");
    c = getchar();

    printf("\n");
    printf("You entered: ");
    putchar(c);
    printf("\n");
    printf("\n");


    return 0;
}*/