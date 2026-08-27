//In this we will set goals for the user and then add furhter data to it 

#include <stdio.h>

typedef struct number_of_user_habits {
    char habits[50];
} habits;

char username[50];

void fetch_username() {
    FILE *ptr = fopen("user_1.txt", "r");
    fscanf(ptr, "USER NAME: %s", username);
    fclose(ptr);
}

int main() {
    fetch_username();
    printf("Hello %s!\n", username);

    int number_of_habits;
    printf("Please enter the number of habits you want to build in this period of 21 days: ");
    scanf("%d", &number_of_habits);

    habits habit[number_of_habits];

    FILE *ptr1 = fopen("user_1.txt", "a");

    for (int i = 0; i < number_of_habits; i++) {
        printf("Habit number %d: ", i);
        scanf("%s", habit[i].habits);
        fprintf(ptr1, "Habit %d: %s.\n", i, habit[i].habits);
    }

    fclose(ptr1);

    printf("Lets go we are set for the next 21 days!!\n");
    return 0;
}