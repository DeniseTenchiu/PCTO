#include <stdio.h>
int fattoriale(int x, int y)
{
    while (x>0)
    {
        y=x*y; 
        x=x-1;
    }   
    return (y);
}
int main ()
{   
    int x;
    int y=1;
    printf ("Scegli un numero e ti dirò il fattoriale. \n");
    scanf ("%d", &x);
    printf ("Il fattoriale è %d.\n", fattoriale(x,y));
    return(0);
}