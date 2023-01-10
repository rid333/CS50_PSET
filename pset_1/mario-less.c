#include<stdio.h>


int get_height(void);
void print_mario(int size);
int main(void) 
{
    int n = get_height();
    print_mario(n);
}


int get_height(void)
{
    int m;
    do 
    {
        printf("Height: ");
        scanf("%i", &m);
    }
    while (m > 8 || m < 1);
    return(m);
}


void print_mario(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int k = size - 1 ; k > i ; k--)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}