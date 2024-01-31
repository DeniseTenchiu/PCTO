#include <stdio.h>
int main()
{
    float numero1;
    float numero2;
    float numero3;
    printf ("Scegli tre numeri e scopri se sono in progressione aritmetica. \n ");
    scanf ("%f", &numero1);
    scanf ("%f", &numero2);
    scanf ("%f", &numero3);
    if (numero3-numero2== numero2-numero1)
    {
        printf("I numeri scelti sono in progressione aritmetica. \n");
    }
    else
    {
        printf ("I numeri scelti non sono in progressione artimetica. \n");
    }
    return(0);
}