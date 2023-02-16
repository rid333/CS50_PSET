#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    char msg[500];
    printf("Message: ");
    scanf("%[^\n]", &msg);

    int len = strlen(msg) * BITS_IN_BYTE;
    int binary[len];
    int index = 0;

    for (int i = 0; i < strlen(msg); i++)
    {
        char ch = msg[i];
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            binary[index + j] = (ch >> BITS_IN_BYTE - j - 1 ) & 1;
        }
        index += BITS_IN_BYTE;
    }
    
    for (int k = 0; k < len; k++)
    {
        print_bulb(binary[k]);
        if ((k + 1) % 8 == 0)
        {
            printf("\n");
         }
    }
    printf("\n");
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
