// In this file we will now add the data into the goals that are set by the user everyday.

#include <stdio.h>
#include <string.h>
#include "mood_rater.c"

int storing_data()
{
    // First we will again fetch the username of the user that is stored in the file and then go ahead.
    FILE *ptr = fopen("user_1.txt", "r");
    char username[50];
    fscanf(ptr, "USER NAME: %s", username);
    fclose(ptr);

    printf("Hello %s!\n", username);
    mood_rater();
    return 0;
}