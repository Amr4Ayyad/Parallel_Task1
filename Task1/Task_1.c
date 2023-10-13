#include <stdio.h>
#include <string.h>



struct User {
    char username[20];
    char password[8];
};

void signUp(struct User* user)
{
    printf("Enter user name: ");
    scanf("%s", user->username);
    printf("Enter Password: ");
    scanf("%s", user->password);
}

int login(const struct User* user)
{
    char username2[20];
    char password2[8];

    printf("Enter user name: ");
    scanf("%s", username2);
    printf("Enter Password: ");
    scanf("%s", password2);

    if (strcmp(user->username, username2) == 0 && strcmp(user->password, password2) == 0)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int main()
{
    struct User user;
    int loggedIn = 0;

    printf("*********************SIGN UP***************************\n");
    signUp(&user);
    printf("Signeeeeeeeeeed up successfully\n");

    printf("\n*********************LOGIN***************************\n");
    loggedIn = login(&user);

    if (loggedIn)
    {
        printf("Logged in Successfully\n");
    }
    else
    {
        printf("Failed to log in\n");
    }

    return 0;
}