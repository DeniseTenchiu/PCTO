#include <stdio.h>
void stampaLettera ()
{
    char lettera;
    printf ("Scrivi una lettera e scopri se è una consonante o una vocale.\n");
    scanf (" %c", &lettera);
    if (lettera =='a' || lettera=='e' || lettera=='i' || lettera=='o' || lettera=='u')
    {printf("E'una vocale.\n");}
    else if ((lettera>= 91 & lettera<=96) ||lettera>=123 || lettera<=64)
    {printf ("Non è una lettera.\n");}
    else
    {printf ("E' una consonante.\n");}
}
int main()
{
    stampaLettera();
    return(0);
}