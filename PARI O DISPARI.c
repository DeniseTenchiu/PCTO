#include <stdio.h>
void controlloPari (int x)
{
    if (x%2==0)
    {
        printf ("E' pari.\n");
    }
    else
    {
        printf ("E' dispari.\n");
    }
    return;
}
int main ()
{
    int x;
    printf("Scegli un numero e vedi se è pari o dispari.\n");
    scanf ("%d", &x);
    controlloPari (x);
    return (0);
}