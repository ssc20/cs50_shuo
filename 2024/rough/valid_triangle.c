#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float x, float y, float z);

int main(void)
{
    float a = get_float("Give me the first side: ");
    float b = get_float("Give me the second side: ");
    float c = get_float ("Give me the third side: ");
    if (valid_triangle(a, b, c))
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
}

bool valid_triangle(float x, float y, float z)
{
    //  only sides with positive length
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }
    // sum of lengths of any 2 sides > length 3rd side
    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }

    return true;
}
