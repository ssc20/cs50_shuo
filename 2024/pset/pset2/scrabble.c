#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Setting constants.

// Number of players
const int N = 2;
// Scrabble letter scores
const int SCORES[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Protoyping
int scrabble(string word);

// Main function (query players, initialize 'scrabble')
int main(void)
{
    string words[N];
    int scores[N] = {0};

    // based on N players, run the below 'for' loop 'N' (2) many times.
    for (int i = 0; i < N; i++)
    {
        words[i] = get_string("Player %i: ", i + 1);
        scores[i] = scrabble(words[i]);
    }

    // determining who wins:
    if (scores[0] > scores[1])
    {
        printf("Player 1 wins!\n");
    }

    else if (scores[1] > scores[0])
    {
        printf("Player 2 wins!\n");
    }

    else
    {
        printf("Tie!\n");
    }
}

int scrabble(string word)
{
    // initializing 'score' variable
    int score = 0;

    // iterate through word length, based on strlen as a limit
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // check if character is an alphabetical character (no numbers or symbols)
        if (isalpha(word[i]))
        {
            // if alphabetical character, convert to uppercase (if needed) and add to 'score' variable using SCORES as an index.
            // note the 'A' is using the int value of "A" as a character (65)

            int letterIndex = toupper(word[i]) - 'A';
            score += SCORES[letterIndex];
        }
    }
    return score;
}
