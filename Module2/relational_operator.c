// Topic: Relational Operators in C
// Description:
// This program demonstrates how to use relational operators such as
// <, <=, >, >=, ==, and != to compare two numbers.

#include <stdio.h> // Standard input-output library (needed for printf)

int main()
{
    // Step 1: Declare and initialize two integer variables
    int a = 10;
    int b = 20;

    // Step 2: Use relational operators to compare 'a' and 'b'

    // (1) Less than (<)
    // Checks if 'a' is smaller than 'b'
    if (a < b)
    {
        printf("a is less than b\n");
    }

    // (2) Less than or equal to (<=)
    // Checks if 'a' is smaller than or equal to 'b'
    if (a <= b)
    {
        printf("a is less than or equal to b\n");
    }

    // (3) Greater than (>)
    // Checks if 'a' is greater than 'b'
    if (a > b)
    {
        printf("a is greater than b\n");
    }

    // (4) Greater than or equal to (>=)
    // Checks if 'a' is greater than or equal to 'b'
    if (a >= b)
    {
        printf("a is greater than or equal to b\n");
    }

    // (5) Equal to (==)
    // Checks if 'a' is equal to 'b'
    if (a == b)
    {
        printf("a is equal to b\n");
    }

    // (6) Not equal to (!=)
    // Checks if 'a' is not equal to 'b'
    if (a != b)
    {
        printf("a is not equal to b\n");
    }

    // Step 3: End the program successfully
    return 0;
}
