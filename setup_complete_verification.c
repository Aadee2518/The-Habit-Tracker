//This code will check whether the user has already setup the file in their name or not?

#include <stdio.h>
#include <string.h>

int setup_complete_verification(){
    FILE *ptr = fopen("user_1.txt", "r");
    char line[100];
    int found = 0;
    while(fgets(line, sizeof(line), ptr) != NULL){
        if(strcmp(line,"SETUP COMPLETE!")){
            found = 1;
            break;
        }
    }
    fclose(ptr);
    return found;
}