// Arithmetic Operators in C
#include <stdio.h>  // Standard Input/Output header file

/*
 * Program: Arithmetic Operations Example
 * Description:
 * This program demonstrates the use of basic arithmetic operators in C:
 * addition (+), subtraction (-), multiplication (*), division (/), and modulus (%).
 */

int main()  // main function — execution starts here
{
    // ------------------------------
    // 1. Variable Declaration
    // ------------------------------
    int a = 11;  // declare variable 'a' and assign value 11
    int b = 5;   // declare variable 'b' and assign value 5

    // ------------------------------
    // 2. Addition Operator (+)
    // ------------------------------
    int sum_ab = a + b;  // adds values of 'a' and 'b'
    printf("Sum of a and b is %d\n", sum_ab);
    // Output: 11 + 5 = 16

    // ------------------------------
    // 3. Subtraction Operator (-)
    // ------------------------------
    int sub_ab = a - b;  // subtracts 'b' from 'a'
    printf("Subtraction of a and b is %d\n", sub_ab);
    // Output: 11 - 5 = 6

    // ------------------------------
    // 4. Multiplication Operator (*)
    // ------------------------------
    int mul_ab = a * b;  // multiplies 'a' and 'b'
    printf("Multiplication of a and b is %d\n", mul_ab);
    // Output: 11 * 5 = 55

    // ------------------------------
    // 5. Division Operator (/)
    // ------------------------------
    int div_ab = a / b;  // divides 'a' by 'b' (integer division)
    printf("Division of a and b is %d\n", div_ab);
    // Output: 11 / 5 = 2 (because both are integers, remainder is ignored)

    // ------------------------------
    // 6. Modulus Operator (%)
    // ------------------------------
    int mod_ab = a % b;  // gives remainder after division of 'a' by 'b'
    printf("Modulus of a and b is %d\n", mod_ab);
    // Output: 11 % 5 = 1

    // ------------------------------
    // 7. End of Program
    // ------------------------------
    return 0;  // successful program termination
}
