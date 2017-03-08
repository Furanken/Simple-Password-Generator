#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/*==================TODO==================
   - being able to store the generated password into txt file

*/
int main(int argc, char** argv)
{
   srand(time(NULL)); //initialization required for randomization

    
    do
    {

        int characterNumber = 0;
        


        WebsiteName website = {"", ""}; //initialize the Websitname structure with both variable empty
        printf("Enter the number of character for the password \n");
        scanf("%d", &characterNumber);
        printf("Please enter the website name : \n");
        scanf("%s", &website.name); //enter the name of the website for the password you want to generate




        generatePassword(&website.password, characterNumber); //call the passwordGeneration function








        printf("%s \n", website.password); //print the new character chain of WebsiteName.password






    }
    while(1);



    return 0;
}

void generatePassword(char *password, int characterNumber)
{

    
    int i = 0;
    char arrayABC[62] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(i; i < characterNumber; i++)
    {
        password[i] = arrayABC[(rand() % 62)]; //replace the content of WebsiteName.password by the generated character
    }
}
