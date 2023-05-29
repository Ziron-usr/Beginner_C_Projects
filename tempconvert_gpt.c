#include <stdio.h>
#include <unistd.h>

// Ziron 25/05/23 - Temperature Conversion Program using 2 functions.

int far2c(int tempf);
int c2far(int tempc);


int main(void)
{
int inp, tempinp;

printf("\nTemperature Conversion °F ⟺  °C\n\n");
sleep(1);
printf("What would you like to do?\n\n  1. °F ⟺  °C\n  2. °C ⟺  °F\n\n");

scanf("%i", &inp);

if (inp == 1)
{
    printf("\nEnter the temperature you want to convert to Celcius: ");
    scanf("%i", &tempinp);
    printf("\n%i°F = %i°C\n\n", tempinp, far2c(tempinp));
    return 0;
}

else if (inp == 2)
{
    printf("\nEnter the temperature you want to convert to Fahrenheit: ");
    scanf("%i", &tempinp);
    printf("\n%i°C = %i°F\n\n", tempinp, c2far(tempinp));
    return 0;
}

else 
{
    printf(" \nINVALID INPUT\n\n");
    return 1;
}
return 0;
}


int far2c(int tempf)
{
    return ((tempf-32)*5/9);
}

int c2far(int tempc)
{
    return ((tempc*9/5)+32);
}