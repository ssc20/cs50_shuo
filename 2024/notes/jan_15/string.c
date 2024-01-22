#include <cs50.h>
#include <stdio.h>
#include <string.h>

// this variant checks efficiencies in code.
int main(void)
{   // this extra space in "Input:  " will line up the names.
    string s = get_string("Input:  ");
    printf("Output: ");
    // declaring i and n as ints, why this optimization works
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}



/*
int main(void)
{   // this will line up the names
    string s = get_string("Input:  ");
    printf("Output: ");
    int length = strlen(s);
    for (int i = 0; i < length(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
*/

/*int main(void)
{   // this will line up the names
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
*/

// what is bad about the for loop?
// calling strlen in the loop again and again...
