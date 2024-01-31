#include <stdio.h>
int main ()
{
    int x;
    int y=2;
    int n=1;
    printf ("Scopri se il tuo numero è un numero primo. \n");
    scanf ("%d", &x);
    while (y<= x/2)
        {
            if (x%y==0)
            {
               n=0;
            } 
            y= y+1;
        }
    if (x<=1 || !n)        
    {
        printf (" %d non è un numero primo. \n" ,x);
    }
    else 
    {
        printf (" %d è un numero primo. \n" ,x);
    }
    return (0);
}