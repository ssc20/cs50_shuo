#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}


/*  int main(int argc, string argv[])
{
    // location 0 will be the name of the program
    // {1, 2, 3...} will be the inputs
    if (argc == 2)
    {
    printf("hello, %s\n", argv[2]);
    }
    else
    {
        printf("hello, world\n");
    }
}
*/
