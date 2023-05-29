#include <stdio.h>

int main(void)
{
    char matrix[3][4] = {
        {' ','O','O',' '},
        {'_','_','_','_'},
        {' ',' ',' ',' '}
    };
    printf("\n");
    for (char row = 0; row < 3; row++) {
        for (char col = 0; col < 4; col++) {
            printf("%c ", matrix[row][col]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
