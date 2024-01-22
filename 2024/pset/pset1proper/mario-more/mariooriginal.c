#include <cs50.h>
#include <stdio.h>

int get_size(void);       // prompt user for size of pyramid, must be 1 - 8 inclusive.
void A_print_grid(int n); // create the actual pyramid

int main(void)
{
    int n = get_size();
    A_print_grid(n);
}

int get_size(void)
{
    int n;
    int max = 8; // setting the conditions of inclusive (max: 8)
    int min = 1; // setting the conditions of inclusive (min: 1)
    do
    {
        n = get_int("Size: ");
    }
    while (n > max || n < min);
    return n;
}

void A_print_grid(int n)
{
    int s = (n - 1);
    int h = (n - (n - 1));  // for 1st pyramid, h = # hashes to print
    int h2 = (n - (n - 1)); // for 2nd pyramid, h2 = # hashes to print

    for (int r = 0; r < n; r++) // row number, should go to 3 max (for 4 rows)
    {
        for (int sp = 0; sp < s; sp++) // space; if n=4, print 3 spaces, since s = n - 1
        {
            printf(" "); // print space
        }
        for (int hash = 0; hash < h; hash++)
        {
            printf(
                "#"); // print hash, n= 4, print 1 hash since h = (4 - (4 - 1)) = 4 - 3 = 1, then h++, 4 - (3 - 1)  = 2.. and so on
        }
        s--; // iterate s, -1, so spaces decrease on left pyramid by 1
        h++; // iterate h (first pyramid), so hashes decrease on left pyramid by 1
        printf("  ");
        for (int hash2 = 0; hash2 < h2; hash2++)
        {
            printf("#"); // print hash on second pyramid
        }
        h2++; // inverse of 1st pyramid, hashes should increase by 1
        // 2nd pyramid code here, before the line break
        printf("\n");
    }
}
