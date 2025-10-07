#include <stdio.h>  // Standard Input/Output header file
/*
 * Program: Basic C Program Example
 * Description:
 * This program demonstrates the basic structure of a C program.
 * It takes an integer input from the user and prints it.
 * It also explains the role of data types, format specifiers, and memory addresses.
 */

int main()  // main function: program execution starts here
{
    // ------------------------------
    // 1. Variable Declaration
    // ------------------------------
    int a;  // 'int' is a data type for integer numbers
             // 'a' is a variable that will store the integer input from the user

    // ------------------------------
    // 2. Taking Input from the User
    // ------------------------------
    printf("Enter an integer: ");  
    /*
     * printf() is used to display text or variables on the screen
     * Here, it prints "Enter an integer: " as a prompt for the user
     */

    scanf("%d", &a);  
    /*
     * scanf() is used to take input from the user
     * %d -> format specifier for integers
     * &a -> address-of operator, gives the memory location of 'a'
     * scanf needs the address because it writes the input directly to the variable
     */

    // ------------------------------
    // 3. Printing the Input Value
    // ------------------------------
    printf("You entered: %d\n", a);  
    /*
     * This prints the value of 'a' entered by the user
     * %d -> tells printf to print an integer
     * \n -> newline character, moves the cursor to the next line
     */

    // ------------------------------
    // 4. Example of Data Type Limitations
    // ------------------------------
    /*
     * C is a strongly typed language. Each variable can store only its declared type.
     * Examples:
     * int x = 10.5;   // ❌ Error: cannot store double in int
     * float y = 10;   // ✅ Allowed: integer converted to float 10.0
     * char c = 'A';   // ✅ Stores single character
     * int z = 'A';    // ✅ Stores ASCII value of 'A' (65)
     */

    // ------------------------------
    // 5. Program Ends
    // ------------------------------
    return 0;  // Return 0 indicates successful program termination
}
