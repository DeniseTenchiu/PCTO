#include <stdio.h>
#include <math.h>
int main ()
{
    int x;
    int y;
    int z;
    int p;
    int A;
    printf ("Ciao, inserisci la misura dei 3 lati del tuo triangolo. \n");
    scanf ("%d",&x);
    scanf ("%d",&y);
    scanf ("%d",&z);
    if (x+y<z || x+z<y || z+y<x)
    {
        printf("Il triangolo non esiste\n");
    }
    else
    {
         printf ("Il perimetro è: %d\n", x+y+z);
        p= (x+y+z)/2;
        A= p*(p-x)*(p-y)*(p-z);
        printf ("L'area è %f\n", sqrt (A));
    }
    return (0);
}