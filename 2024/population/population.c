#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    // 'startSize' = starting population of startSize llamas, must be >= 9
    int startSize, endSize;
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    // 'endSize' = ending population of endSize llamas, must be >= startSize
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold

    int Population = startSize;
    int years = 0;
    for (years = 0; Population < endSize; years++)
    {
        Population = Population + (Population / 3) - (Population / 4);
    }
    
    // TODO: Print number of years
    printf("Years: %i\n", years);
}
