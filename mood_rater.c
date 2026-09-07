// This is the function which will ask the user about how their day has been and on a scale of 10 how will they rate their day

#include <stdio.h>
#include <string.h>

int mood_rater()
{
    printf("How do you feel today let's rate your day!\n");

    float day_rating;
    printf("On a scale of 1 to 10 please rate your day: ");
    scanf("%f", &day_rating);

    // Now we will add the if else ladder in the code so we can give a reasonable response to the user
    if (day_rating > 7)
    {
        printf("Great days are proof of what you're capable of — keep stacking them.\n");
    }
    else if (day_rating <= 7 && day_rating >= 5)
    {
        printf("You're allowed to be tired. You're allowed to not have it all figured out today.\n");
    }
    else if (day_rating < 5 && day_rating >= 0)
    {
        printf("I know today felt heavy. That doesn't erase how far you've come.\n");
    }
    else if (day_rating < 0)
    {
        printf("Don't be so negative about a bad day, Be thankful that you are healthy and woke up today.\n");
    }
    return 0;
}