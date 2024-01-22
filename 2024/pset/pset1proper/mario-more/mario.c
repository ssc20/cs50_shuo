#include <cs50.h>
#include <stdio.h>

int get_size(void);           // Prompt user for size of pyramid, must be 1 - 8 inclusive.
void print_pyramid(int size); // Create the actual pyramid

int main(void)
{
    int size = get_size();
    print_pyramid(size);
}

int get_size(void)
{
    int size;
    do
    {
        size = get_int("Size: ");
    }
    while (size < 1 || size > 8);
    return size;
}

void print_pyramid(int size)
{
    for (int row = 0; row < size; row++)
    {
        // Print spaces for left pyramid
        for (int space = 0; space < size - row - 1; space++)
        {
            printf(" ");
        }

        // Print hashes for left pyramid
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }

        // Print gap between pyramids
        printf("  ");

        // Print hashes for right pyramid
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }

        // End of row
        printf("\n");
    }
}
