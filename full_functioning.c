#include <stdio.h>
#include "Info_page.c"
#include "user_credentials.c"
#include "setting_goals.c"

int main(){
    info_page();
    user_credentials_page();
    goal_setup();
    return 0;
}