#include <stdio.h>
int main ()
{
    int l1;
    int l2;
    int l3;
    printf ("Inserisci le misure dei tuoi lati. \n");
    scanf ("%d", &l1);
    scanf ("%d", &l2);
    scanf ("%d", &l3);
    if (l1+l2<l3 || l2+l3<l1 || l3+l1<l2)
    {
        printf ("Le tue misure non possono formare un triangolo. \n");
    }
    else if (l1!=l2 & l2!=l3 & l3!=l1)
    {
        printf ("Il traingolo è scaleno. \n");
    }
    else if ((l1==l2 & l2!=l3) || (l2==l3 & l3!=l1) || (l1==l3 & l1!=l2))
    {
        printf ("Il triangolo è isoscele. \n");
    }
    else if (l1==l2 & l2==l3)
    {
        printf ("Il triangolo è equilatero. \n");
    }
    else 
    {
        printf ("Impossibile. \n");
    }
    return (0);
}