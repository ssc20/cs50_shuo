#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = get_int("Enter a size: ");
    int sequence[size];

    sequence[0] = 1;
    printf("%i\n", sequence[0]);

    for (int i = 1; i < size; i++)
    {
            sequence[i] = sequence[i - 1] * 2;
            printf("%i\n", sequence[i]);
    }
}



// int main(void)
// {
//     int sequence[5];  // Declare an array to hold 5 integers.

//     for (int i = 0; i < 5; i++)
//     {
//         // For the first element, initialize it to 1.
//         // For subsequent elements, double the previous element.
//         sequence[i] = (i == 0) ? 1 : sequence[i - 1] * 2;

//         // Print each element.
//         printf("%i\n", sequence[i]);
//     }
// }



// int main(void)
// {
//     int sequence[] = {0, 0, 0, 0, 0};
//     int i;

//     for (i = 0; i < 5; i++)
//     {
//         sequence[i - i] = 1;
//         sequence[i + 1] = sequence[i ] * 2;
//         printf("%i\n", sequence[i]);
//     }
// }

// int main(void)
// {
//     int sequence[5];

//     sequence[0] = 1;
//     printf("%i\n", sequence[0]);

//     for (int i = 1; i < 5; i++)
//     {
//         sequence[i] = sequence[i - 1] * 2;
//         printf("%i\n", sequence[i]);
//     }

// }
