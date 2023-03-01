#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    int key = atoi(argv[1]);

    char text[250];   
    printf("Plaintext: ");
    scanf("%s", &text);

    printf("Ciphertext: ");
    for (int i = 0; i < strlen(text); i++)
    {
        if (isupper(text[i]))
        {
            printf("%c", (((text[i] - 65) + key) % 26) + 65);
        }
        else
        {
            printf("%c", (((text[i] - 97) + key) % 26) + 97);
        }
    }
    printf("\n");
}