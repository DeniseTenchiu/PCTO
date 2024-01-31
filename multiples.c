#include <stdio.h>
int main()
{
    int numero1;
    int numero2;
    printf ("Scegli un numero? \n");
    scanf ("%d", &numero1);
    printf ("Scegli un altro numero e scopri se sono multipli. \n");
    scanf ("%d", &numero2);
    if (numero1%numero2==0)
    {
        printf ("E' un multiplo \n");
    }
    else
    {
        printf ("Non è un multiplo. \n");
    }
    return(0); 
}