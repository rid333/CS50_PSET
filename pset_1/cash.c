#include<stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Positive input
    int n = get_cents();

    // calculate number of quarters
    int quarters = calculate_quarters(n);
    n = n - quarters * 25;

    // calculate number of dimes
    int dimes = calculate_dimes(n);
    n = n - dimes * 10;

    // calculate number of nickelss
    int nickels = calculate_nickels(n);
    n = n - nickels * 5;

    // calculate number of pennies
    int pennies = calculate_pennies(n);
    n = n - pennies * 1;

    //calculate result
    int result = quarters + dimes + nickels + pennies;

    //print result
    printf("%i", result);
}

int get_cents(void)
{
    int n;
    do
    {
        printf("Change owed: ");
        scanf("%i", &n);
    } while (n < 0);
    return n;
}

int calculate_quarters(int cents)
{
    return cents / 25;
}

int calculate_dimes(int cents)
{
    return cents / 10;
}

int calculate_nickels(int cents)
{
    return cents / 5;
}

int calculate_pennies(int cents)
{
    return cents / 1;
}