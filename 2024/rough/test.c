#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length = printf("4003600000000014\n");
    int rLength = length - 1;
    printf("The previous message was %i characters long.\n", rLength);
}

