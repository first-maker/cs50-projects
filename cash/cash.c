#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{

    // Ask how many cents the customer is owed
    int cents;
    cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf(" Number of Coins: %i", coins);
    printf("\n Quarters: %i", quarters);
    printf("\n Dimes: %i", dimes);
    printf("\n Nickels: %i", nickels);
    printf("\n Pennies: %i", pennies);
    printf("\n");
    int f=30;
        printf("%c",f);

}


int get_cents(void)
{
    int value;
    do
    {
        value = get_int(" Change owed: ");
    }
    while (value < 1);
    return value;
}

int calculate_quarters(int cents)
{
    int quarters = cents / 25;
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = cents / 10;
    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickels = cents / 5;
    return nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies = cents / 1;
    return pennies;
}
