#include <stdio.h>
int main ()
{
    int x;
    int y;
    printf("Enter the x-coordinate of the point: ");
    scanf("%d", &x);
    printf("Enter the y-coordinate of the point: ");
    scanf("%d", &y);
    if (x>=0 && y>=0)
    {
        printf("Il punto si trova nel quadrante 1.\n");
    }
    else if (x<=0 && y>=0)
    {
        printf("Il punto si trova nel quadrante 2.\n");
    }
    else if (x<=0 && y<=0)
    {
        printf("Il punto si trova nel quadrante 3.\n");
    }
    else
    {
        printf("Il punto si trova nel quadrante 4.\n");
    }
    return 0;
}