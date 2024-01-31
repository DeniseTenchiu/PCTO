#include <stdio.h>
int main ()
{
    int anni1;
    printf ("A che età si può prendere la patente nel tuo paese? \n");
    scanf ("%d", &anni1);
    int anni2;
    printf ("Quanti anni hai? \n");
    scanf ("%d", &anni2);
    if ( anni1<=anni2)
    {
        printf ("Puoi prendere la patente. \n");
    }
    else
    {
        printf ("Non puoi prendere la patente. \n");
    }
    return(0);
}