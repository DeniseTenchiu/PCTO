#include <stdio.h>
int main ()
{
    float celsius;
    printf ("Scrivi la temperatura in gradi Celsius per convertirla. \n");
    scanf ("%f", &celsius);
    float k = 273.15;
    float f1= 1.8;
    float f2= 32;
    if (celsius <= -273.15)
    {
        printf("Oltre lo zero assoluto è errore. \n");
    }
    else
    {
    printf ("I gradi in Kelvin sono %f.\n", (celsius+k) );
    printf ("I gradi in Fahrenheit sono %f. \n", (f1*celsius+f2));
    }
    return (0);
}