#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int calculate_letters(char text[]);
int calculate_sentences(char text[]);
int calculate_words(char text[]);

int main(void) 
{
    char write[500];
    printf("Text: ");
    scanf("%[^\n]", &write);

    int letters = calculate_letters(write);
    int sentences = calculate_sentences(write);
    int words = calculate_words(write);

    float average_letters = ((float)letters / words) * 100;
    float average_sentences = ((float)sentences / words) * 100;

    float index = 0.0588 * average_letters - 0.296 * average_sentences - 15.8;

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade: %.0f\n", roundf(index));
    }    
}

int calculate_letters(char text[])
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int calculate_sentences(char text[])
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        } 
    }
    return sentences;
}

int calculate_words(char text[])
{
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}