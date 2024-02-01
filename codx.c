#include <stdio.h>
#include <string.h>
int main() 
{
    int budget;
    char weather[20];
    char where[20];
    char nightlife[20];
    printf("Hi, I'm quicktravels and I'm here to help you choose your European destination. Please insert your budget in euros.\n");
    scanf("%d", &budget);
    printf("Thank you, now choose the climate you prefer. (temperate or continental)\n");
    scanf("%s", weather);
    printf("Now choose if you want to go to the beach or to the mountains. (Write beach or mountains)\n");
    scanf("%s", where);
    printf("Now choose if you are interested in the nightlife. (Answer with yes or no)\n");
    scanf("%s", nightlife);
    
    if (budget <= 1500) 
    {
        if (strcmp(weather, "temperate") == 0 || strcmp(weather, "Temperate") == 0) 
        {
            if (strcmp(where, "beach") == 0 || strcmp(where, "Beach") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
                {
                    printf("The best destination for you is Spain!\n");
                } 
                else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
                {
                    printf("The best destination for you is Albania!\n");
                }
                else
                {
                    printf("Error. Control the spelling.\n");
                }
            } 
            else if (strcmp(where, "mountains") == 0 || strcmp(where, "Mountains") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
                {
                    printf("The best destination for you is Portugal!\n");
                } 
                else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
                {
                    printf("The best destination for you is San Marino!\n");
                }
                else
                {
                    printf("Error. Control the spelling.\n");
                }
            } 
            else
            {
                printf("Error. Control the spelling.\n");
            }
        }
        else if (strcmp(weather, "continental") == 0 || strcmp(weather, "Continental") == 0) 
        {
            if (strcmp(where, "beach") == 0 || strcmp(where, "Beach") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
                {
                    printf("The best destination for you is France!\n");
                } 
                else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
                {
                    printf("The best destination for you is Bulgaria!\n");
                }
                else
                {
                    printf("Error. Control the spelling.\n");
                }
            } 
            else if (strcmp(where, "mountains") == 0 || strcmp(where, "Mountains") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
                {
                    printf("The best destination for you is Hungary!\n");
                } 
                else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
                {
                    printf("The best destination for you is Slovakia!\n");
                }
                else
                {
                    printf("Error. Control the spelling.\n");
                }
            }
            else
            {
                printf("Error. Control the spelling.\n");
                
            }
        }
        else
        {
            printf("Error. Control the spelling.\n");
        }
    } 
    else if (budget > 1500) 
    {
        if (strcmp(weather, "temperate") == 0 || strcmp(weather, "Temperate") == 0) 
        {
            if (strcmp(where, "beach") == 0 || strcmp(where, "Beach") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
                {
                    printf("The best destination for you is Italy!\n");
                } 
                else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
                {
                    printf("The best destination for you is Cyprus!\n");
                }
                else
                {
                    printf("Error. Control the spelling.\n");
                }
            } 
            else if (strcmp(where, "mountains") == 0 || strcmp(where, "Mountains") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
                {
                    printf("The best destination for you is Greece!\n");
                } 
                else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
                {
                    printf("The best destination for you is Estonia!\n");
                }
                else
                {
                    printf("Error. Control the spelling.\n");
                }
            }
            else
            {
                printf("Error. Control the spelling.\n");
            }
        } 
        else if (strcmp(weather, "continental") == 0 || strcmp(weather, "Continental") == 0) 
        {
            if (strcmp(where, "beach") == 0 || strcmp(where, "Beach") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
                {
                    printf("The best destination for you is Netherlands!\n");
                } 
                else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
                {
                    printf("The best destination for you is Denmark!\n");
                }
                else
                {
                    printf("Error. Control the spelling.\n");
                }
            } 
            else if (strcmp(where, "mountains") == 0 || strcmp(where, "Mountains") == 0) 
            {
                if (strcmp(nightlife, "yes") == 0 || strcmp(nightlife, "Yes") == 0) 
                {
                    printf("The best destination for you is Germany!\n");
                } 
                else if (strcmp(nightlife, "no") == 0 || strcmp(nightlife, "not") == 0 || strcmp(nightlife, "No") == 0) 
                {
                    printf("The best destination for you is Luxembourg!\n");
                }
                else
                {
                    printf("Error. Control the spelling.\n");
                }
            }
            else
            {
                printf("Error. Control the spelling.\n");
            }
        }
        else
        {
            printf("Error. Control the spelling.\n");
        }
    }
    else
    {
        printf("Error. Control the spelling.\n");
    }

    return 0;
}
