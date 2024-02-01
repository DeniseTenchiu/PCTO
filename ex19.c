#include <stdio.h>
int main ()
{
    char parola [100];
    int x=0;
    printf ("Scrivi una parola in minuscolo\n");
    scanf(" %[^\n]", parola);
    while ( parola [x] != '\0')
    {
        if (parola [x]>= 97 && parola[x]<=122)
        {
            parola[x]-=32;
            
        }
        printf ("%c", parola [x]);
        x=x+1;
    }
    return (0);
}
