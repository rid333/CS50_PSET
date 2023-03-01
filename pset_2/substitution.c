#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters\n");
        return 2;
    }

    char text[250];   
    printf("Plaintext: ");
    scanf("%[^\n]", &text);
    int lenText = strlen(text);

    printf("Ciphertext: ");
    for (int i = 0; i < lenText; i++)
    {
        if (isupper(text[i]))
        {
            int j = text[i] - 'A';
            printf("%c", argv[1][j]);
        }
        else if (islower(text[i]))
        {
            int j = text[i] - 'a';
            text[i] = argv[1][j] + 32;
            printf("%c", text[i]);
        }
    }
}