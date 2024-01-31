#include <stdio.h>
int main ()
{
    int anno;
    int n=1969;
    printf ("Il primo uomo andato sulla luna è stato nel 1969. Quale anno sei nato? \n");
    scanf ("%d", &anno);
    if (anno==n)
    {
        printf ("Sei nato lo stesso anno dello sbarco sulla luna. \n");
    }
    else if (anno>n)
    {
        printf ("Sei nato %d anni dopo lo sbarco sulla luna. \n", (anno-n));
    }
    else 
    {
        printf ("Sei nato %d anni prima dello sbarco sulla luna. \n", (n-anno));
    }
    return(0);
}