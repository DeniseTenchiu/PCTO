#include <stdio.h>
int main ()
{
    int x;
    int y=1;
    printf ("Scegli un numero e ti dirò il fattoriale. \n");
    scanf ("%d", &x);
    while (x>0)
    {
        y=x*y; 
        x=x-1;         
    }
    printf ("%d\n", y);
    return(0);
}