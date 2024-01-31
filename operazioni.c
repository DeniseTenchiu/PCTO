#include <stdio.h>
void stampaSottrazione ()
{
    int x1;
    int x2;
    char y; 
    printf ("Scegli 2 numeri.\n");
    scanf (" %d", &x1);
    scanf (" %d", &x2);
    printf ("Scegli l'operazione da eseguire.\n");
    scanf (" %c", &y);
    if (y=='+')
    {
        printf ("Il tuo risultato è %d\n", x1+x2);
    }
    else if (y=='-')
    {
        printf ("Il tuo risultato è %d\n", x1-x2);
    }
    else if (y=='*')
    {
        printf ("Il tuo risultato è %d\n", x1*x2);
    }
    else if (y=='/')
    {
        printf ("Il tuo risultato è %d\n", x1/x2);
    }
    else
    {
        printf ("Error\n");
    }
}
int main ()
{
 stampaSottrazione();
 
 return (0);
}