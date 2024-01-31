#include <stdio.h>
int main()
{
    int anno;
    printf ("Scrivi il tuo anno di nascita e scopri se era bisestile. \n");
    scanf ("%d", &anno);
    if (anno%4==0&&anno%100!=0)
    {
        printf ("L'anno della tua nascita era bisestile. \n");

    }
    else
    {
        printf ("L'anno della tua nascita non era bisestile. \n");
    }
   return(0);
}