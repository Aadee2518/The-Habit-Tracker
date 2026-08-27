// In this code we will create a new file for the user and in it we will store the following:
/*1. Username
2. Userphone number
3. Email address
*/

#include <stdio.h>
typedef struct user_credentials
{
    char username[50];
    char phone_number[11];
    char email[50];
}credentials;

int user_credentials_page(){
    FILE *ptr;
    ptr = fopen("user_1.txt", "a");
    credentials user1;

    printf("Please enter the following:\n");
    printf("USER NAME: ");
    scanf("%s", user1.username);

    printf("USER PHONE NUMBER:");
    scanf("%s", user1.phone_number);

    printf("USER EMAIL:");
    scanf("%s", user1.email);

    fprintf(ptr, "USER NAME: %s\n", user1.username);
    fprintf(ptr, "PHONE NUMBER: %s\n", user1.phone_number);
    fprintf(ptr, "EMAIL ADDRESS: %s\n", user1.email);

    fclose(ptr);
    return 0;
}