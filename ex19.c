#include <stdio.h>
#include <string.h>
int main ()
{
    char parola [100];
    char x;
    printf ("Scrivi una parola in minuscolo\n");
    scanf("%*s", parola);
    while ( parola [x] !=0)
    {
        if (parola [x]>= 97 && parola[x]<=122)
        {
            parola[x]-=32;
            printf ("%c", parola [x]);
        }
        x=x+1;
    }
    return (0);
}
