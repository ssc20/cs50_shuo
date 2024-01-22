
#include <cs50.h>
#include <stdio.h>

void set_array(int array[4]);
void set_int(int x);

int main(void)
{
    int a = 10;
    int b[4] = { 0, 1, 2, 3 };
    set_int(a); // This will not change 'a' in main
    set_array(b); // This will change b[0] to 22
    printf("%d, %d\n", a, b[0]);
}

void set_array(int array[4])
{
    array[0] = 22; // This changes b[0] in main to 22
}

void set_int(int x)
{
    x = 22; // This changes x locally but not 'a' in main
}
