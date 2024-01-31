#include <stdio.h>
int main()
{
    int anni;
    printf("Quanti anni hai?. \n");
    scanf("%d", &anni);
    if(anni<= 18)
    {
        printf("Sei minorenne. \n");
    }
    else if (anni<= 49)
    {
        printf("Sei maggiorenne. \n");
    }
    else if (anni<= 120)
    {
        printf("Sei vecchio. \n");
    }
    else
    {
        printf("Sei un vampiro, AL ROGO!! \n");
    }
    return (0);
}