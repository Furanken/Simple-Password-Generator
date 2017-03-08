#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/*==================TODO==================
   - being able to store the generated password into txt file

*/
int main(int argc, char** argv)
{

    int boucle = 0; // with this you can generate all password you want without restarting the program
    do
    {

        int characterNumber = 0;
        


        WebsiteName website = {"", ""}; //initialize the Websitname structure with both variable empty
        printf("Enter the number of character for the password \n");
        scanf("%d", &characterNumber);
        printf("Please enter the website name : \n");
        scanf("%s", &website.name); //enter the name of the website for the password you want to generate




        passwordGeneration(&website, characterNumber); //call the passwordGeneration function








        printf("%s \n", website.password); //print the new character chain of WebsiteName.password






    }
    while(boucle == 0);



    return 0;
}

void passwordGeneration(WebsiteName *array, int characterNumber)
{

    srand(time(NULL)); //initialize required for randomization
    int i = 0;
    char arrayABC[62] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(i; i < characterNumber; i++)
    {
        array->password[i] = arrayABC[(rand() % 62)]; //replace the content of WebsiteName.password by the generated character
    }
}
