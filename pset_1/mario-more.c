#include<stdio.h>

int get_height(void);
void print_mario(int size);

int main()
{
    int n = get_height();
    print_mario(n);
}

// get grid size 0 < grid < 9
int get_height(void)
{
    int height;
    do
    {
        printf("Height: ");
        scanf("%i", &height);
    } while (height < 1 || height > 8);
}

// mario pyramid
void print_mario(int size)
{
    for (int i = 0; i < size; i++) 
    {
        // space before first pyramid
        for (int j = size - 1 ; j > i ; j--)
        {
            printf(" ");
        }

        // first pyramid
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // space between pyramids
        printf("  ");

        // second pyramid
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }

        // space
        printf("\n");  
    }
}