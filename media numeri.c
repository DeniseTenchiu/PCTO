#include <stdio.h>
int main ()
{
    int x=0;
    int n=0;
    int y=0;
    while (x>=0)
    {
        printf ("Inserisci un numero.\n");
        scanf ("%d",&x);
        if (x>0)
        {
            n=n+1;
            y=y+x; 
            
        }
        y=y/n;
        printf ("La media è %d\n", y);
    } 
    return (0);
}