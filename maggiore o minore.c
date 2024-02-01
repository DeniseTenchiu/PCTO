#include <stdio.h>
void numeroMaggiore (int x,int y)
{
    if (x>y)
    {
        printf ("%d è maggiore di %d.\n", x, y);
    }
    else if (x<y)
    {
        printf ("%d è maggiore di %d. \n", y, x);
    }
    else 
    {
        printf ("%d è uguale a %d.\n", x, y);
    }
}
int main ()
{
    int x;
    int y;
    printf("Scegli 2 numeri e scopri quale è il maggiore.\n");
    scanf ("%d", &x);
    scanf ("%d", &y);
    numeroMaggiore (x,y);
    return (0);
}
