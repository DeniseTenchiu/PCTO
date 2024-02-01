#include <stdio.h>
int main ()
{
    int budget;
    char weather [20];
    char where [20];
    char nightlife [20];
    printf ("Hi, I'm quicktravels and I'm here to help you choose your European destination. Please insert your budget in euros.\n");
    scanf ("%d", &budget);
    printf ("Thank you, now choose the climate you prefer. (temperate or continental\n");
    scanf ("%s", weather);
    printf("Now choose if you want to go to the beach or to the mountains. (Write beach or mountains)\n");
    scanf ("%s", where);
    printf ("Now choose if you are interested in the nightlife. (Answer with yes or no)\n");
    scanf ("%s", nightlife);
    if (budget<=1500)
    {
        if(weather==temperate || weather== Temperate)
        {
            if(where== beach || where==Beach)
            {
                if(nightlife==yes ||nightlife==Yes)
                {
                    printf("The best destination for you is Spain!\n");
                }
                else if (nightlife==no || nightlife==not ||nightlife==No)
                {
                    printf("The best destination for you is Albania!\n");
                }
            }
            else if (where==mountains || where== Mountains)
            {
                if(nightlife==yes ||nightlife==Yes)
                {
                    printf("The best destination for you is Portugal!\n");
                }
                else if (nightlife==no || nightlife==not ||nightlife==No)
                {
                    printf("The best destination for you is San Marino!\n");
                } 
            }   
        }
        else if (weather==continental || weather== Continental)
        {
            if(where==beach || where==Beach)
            {
                if(nightlife==yes ||nightlife==Yes)
                {
                    printf("The best destination for you is France!\n");
                }
                else if (nightlife==no || nightlife==not ||nightlife==No)
                {
                    printf("The best destination for you is Bulgary!\n");
                }
            }
            else if (where==mountains || where== Mountains)
            {
                if(nightlife==yes ||nightlife==Yes)
                {
                    printf("The best destination for you is Hungary!\n");
                }
                else if (nightlife==no || nightlife==not ||nightlife==No)
                {
                    printf("The best destination for you is Slovakia!\n");
                } 
            }
        }
    }
    else if (budget>1500)
    {
        if(weather==temperate || weather== Temperate)
        {
            if(where== beach || where==Beach)
            {
                if(nightlife==yes ||nightlife==Yes)
                {
                    printf("The best destination for you is Italy!\n");
                }
                else if (nightlife==no || nightlife==not ||nightlife==No)
                {
                    printf("The best destination for you is Cyprus!\n");
                }
            }
            else if (where==mountains || where== Mountains)
            {
                if(nightlife==yes ||nightlife==Yes)
                {
                    printf("The best destination for you is Greece!\n");
                }
                else if (nightlife==no || nightlife==not ||nightlife==No)
                {
                    printf("The best destination for you is Estonia!\n");
                } 
            }   
        }
        else if (weather==continental || weather== Continental)
        {
            if(where== beach || where==Beach)
            {
                if(nightlife==yes ||nightlife==Yes)
                {
                    printf("The best destination for you is Netherlands!\n");
                }
                else if (nightlife==no || nightlife==not ||nightlife==No)
                {
                    printf("The best destination for you is Denmark!\n");
                }
            }
            else if (where==mountains || where== Mountains)
            {
                if(nightlife==yes ||nightlife==Yes)
                {
                    printf("The best destination for you is Germany!\n");
                }
                else if (nightlife==no || nightlife==not ||nightlife==No)
                {
                    printf("The best destination for you is Luxemburg!\n");
                } 
            }
        }  
    }
return (0);
}