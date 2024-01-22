#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string phrase = get_string("Enter your phrase: ");
    int length = strlen(phrase);
    for(int i = 0; i < length - 1; i++)
    {
        // Check if characters are not alphabetical
        if (phrase[i] > phrase[i + 1])
        {
            printf("Not in alphabetical order.\n");
            return 0;
        }
    }
    printf("Alphabetical order!\n");
    return 0;
}


// int main(void)
// {
//     string phrase = get_string("Enter your phrase: ");
//     int length = strlen(phrase);
//     for (int i = 0, length = strlen(phrase); i < length; i++)
//     {

//     }
// }




// int main(void)
// {
//     string phrase = get_string("Enter your phrase: ");
//     int length = strlen(phrase);
//     for (int i = 0; i < length; i++)
//     {

//     }
// }
