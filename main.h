#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
typedef struct WebsiteName WebsiteName;



struct WebsiteName
{
    char name[100];
    char password[100];
};

void generatePassword(char *password, int characterNumber);

#endif // MAIN_H_INCLUDED
