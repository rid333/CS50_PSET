#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char word[]);

int main(void)
{
    // Get input words from both players
    char player1[50], player2[50];
    printf("Player 1: ");
    scanf("%s", &player1);
    printf("Player 2: ");
    scanf("%s", &player2);

    // Score both words
    int score1 = compute_score(player1);
    int score2 = compute_score(player2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
    printf("%i dan %i\n", score1, score2);
}

int compute_score(char word[])
{
    // TODO: Compute and return score for string
    int score = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 65]; //ascii
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 97];
        }
    }
    return score;
}
