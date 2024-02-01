#include <stdio.h>
#include <math.h>
int main ()
{
    int x;
    int y;
    int z;
    int p;
    int A;
    printf ("Ciao, inserisci la misura in centimetri dei 3 lati del tuo triangolo. \n");
    scanf ("%d",&x);
    scanf ("%d",&y);
    scanf ("%d",&z);
    p= (x+y+z)/2;
    A= p*(p-x)*(p-y)*(p-z);
    if (A>0)
    {
        printf ("Il perimetro è: %d cm.\n", x+y+z);
        printf ("L'area è %f cmq.\n", sqrt (A));
    }
    else
    {
        printf("Il triangolo non esiste.\n");
    }
    return (0);
}