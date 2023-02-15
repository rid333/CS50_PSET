#include <ctype.h>
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

    double average_letters = letters / words * 100.0;
    double average_sentences = sentences / words * 100.0;

    int index = 0.0588 * average_letters - 0.296 * average_sentences - 15.8;

    printf("Grade: %i\n", index);
    printf("%f dan %f", average_letters, average_sentences);
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