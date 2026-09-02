#include <stdio.h>
#include "Info_page.c"
#include "user_credentials.c"
#include "setting_goals.c"
#include "setup_complete_verification.c"

char username[50];
void fetching_username_again(){
    FILE *ptr = fopen("user_1.txt", "r");
    fscanf(ptr, "USER NAME: %s", username);
    fclose(ptr);
}

int main(){
   if(setup_complete_verification()){
    fetching_username_again();
    printf("Welcome back %s!\n", username);
    printf("Let's move forward!\n");
   }
   else{
    info_page();
    user_credentials_page();
    goal_setup();
   }
   return 0;
}