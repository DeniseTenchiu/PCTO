#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int secretnumber;
    int guess;
    int n=0;
    while (n<=10)
    {
        srand(time(NULL));
        secretnumber = rand() % 100 + 1;
        printf("Welcome to the Number Guessing Game!\n");
        printf("Guess the number between 1 and 100.\n");
        printf("Enter your guess:");
        scanf(" %d", &guess);
        if (secretnumber == guess)
        {
            printf("Congrats! My guess was %d.\n", secretnumber);
            n=n+1;
            printf("Il tuo punteggio è %d.\n", n);
        }
        else
        {
            printf("Ma anche no, was %d.\n", secretnumber);
            printf("Il tuo punteggio è %d.\n", n);
        }
    }
    printf ("Hai vinto.\n");
    return (0);
}
