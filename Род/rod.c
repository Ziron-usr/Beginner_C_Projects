#include <stdio.h>
#include <string.h>
#include <locale.h>


/* 
   Jason Onoufrienko
   Ziron - 27/04/2023
   Rod.c
*/

int main(void)
{

    setlocale(LC_ALL, "ru_RU.UTF-8");

    char usrinput[50];
    printf("\nНу что, пиши какое слово: ");
    scanf("%s", usrinput);
    
    int length = strlen(usrinput);
    char last_ltr = usrinput[length - 1];
    char sclast_ltr = usrinput[length -2];

/*  Storing UTF-8 code in char to avoid errors. 
    In UTF-8, characters from the ASCII character set (which includes the Latin alphabet) are encoded using a single byte, 
    while characters outside the ASCII range are encoded using multiple bytes.

    Since the Cyrillic uppercase letter "А" is outside the ASCII range, it requires two bytes to represent it in UTF-8. 
    The first byte (0xD0) is the prefix for all Cyrillic characters, 
    while the second byte (0x90) is the code point for the specific character "А". */


    char a = '\xD0\xB0'; // Буква "а"
    char A = '\xD0\x90'; // Буква "А"
    char ya = '\xD1\x8F'; // Буква "я"
    char Ya = '\xD0\xAF'; // Буква "Я"
    char o = '\xD0\xBE'; // Буква "о"
    char O = '\xD0\x9E'; // Буква "О"
    char e = '\xD0\xB5'; // Буква "е"
    char E = '\xD0\x95'; // Буква "Е"
    char eo = '\xD1\x91'; // Буква "ё"
    char Eo = '\xD0\x81'; // Буква "Ё"
    char myzyk = '\xD1\x8C'; // Буква "ь"
    char Myzyk = '\xD0\xAC'; // Буква "Ь"
    char ii = '\xD0\xB9'; // Буква "й"
    char Ii = '\xD0\x99'; // Буква "Й"
    char all = '\xD0';
 
// checks if input contains only Cyrillic characters, otherwise error message.
    for (int i = 0; i < length; i++) {
        if (usrinput[i] < "\u0410") {
            printf("\n*** Неверный ввод ***\n\n");
            return 1;
        }
    }

if (last_ltr == a || last_ltr == A || last_ltr == ya || last_ltr == Ya)
    {
        printf("\nЭто слово Женского рода.\n\n");
    }
else if (last_ltr == o || last_ltr == O || last_ltr == e || last_ltr == E || last_ltr == eo || 
    last_ltr == Eo || (last_ltr == myzyk && sclast_ltr != ii) || (last_ltr == Myzyk && sclast_ltr != Ii))
    {
        printf("\nЭто слово Среднего рода.\n\n");
    }
else
    {
        printf("\nЭто слово Мужского рода.\n\n");
    }

    
    return 0;

}
