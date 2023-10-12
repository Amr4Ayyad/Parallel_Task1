#include <stdio.h>
#include <string.h>

int main()
{
    char username[20];
    char password[8];
    char confirm[8];
    char username2[20];
    char password2[8];

    printf("*********************SIGN UP***************************\n");
    printf("Enter user name: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);
    printf("Confirm Password: ");
    scanf("%s", confirm);
    
    if (strcmp(confirm, password) == 0)
    {
        printf("Signed up successfully\n");
    }
    else
    {
        printf("Sign up Failed\n");
        return 0 ;
    }

    printf("\n*********************LOGIN***************************\n");
    printf("Enter user name: ");
    scanf("%s", username2);
    printf("Enter Password: ");
    scanf("%s", password2);

    if (!strcmp(username, username2) && !strcmp(password, password2))
    {
        printf("Logged in Successfully\n");
    }
    else
    {
        printf("Failed to log in\n");
    }

    return 0;
}