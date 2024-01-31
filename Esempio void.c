#include <stdio.h>
void stampaCubo ()
{
    int numero;
    int cubo;
    printf("Inserisci un numero\n");
    scanf("%d", &numero);
    cubo= numero*numero*numero;
    printf ("Il cubo di %d è %d\n", numero, cubo);
}
int main()
{
stampaCubo();
printf("Ciao\n");
stampaCubo();
stampaCubo();
stampaCubo();
printf("Fine\n");
return (0);
}
