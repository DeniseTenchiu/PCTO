#include <stdio.h>
int main ()
{
    int x;
    while (x>0)
    { 
        printf ("Inserisci il numero di prodotti ordinati.\n");
        scanf ("%d", &x);
        printf ("Hai ordinato %d pezzi.\n", x);
        if (x<=30 & x>0)
        {
            printf ("Il tuo totale è %d€.\n", x*5);
        }
        else if (x <=50 & x>0)
        {
            printf ("Il tuo totale è %d€.\n", (x*5- (x*5*10/100)));
        }
        else if (x>50)
        {
            printf ("Il tuo totale è %d€. \n", (x*5- (x*5*15/100)));
        }
        else if (x<=0)
        {
            printf ("Error.\n");
        }
    }
    return (0);
}