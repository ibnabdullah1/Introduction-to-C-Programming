/*
---------------------------------------------------------------
  📘 C Programming – Variables (Basic Level)
---------------------------------------------------------------
  In this program, we will learn about different types of 
  variables in C, such as:
  1. int
  2. float
  3. char
  4. double
  5. bool (from <stdbool.h>)
  6. string (character array)

  We will declare, initialize, and print each variable.
---------------------------------------------------------------
*/

#include <stdio.h>      // Standard Input/Output library
#include <stdbool.h>    // For boolean type (true/false)

// Main function – program execution starts here
int main()
{
    // 🔹 Integer variable
    int intNum1 = -100;
    int intNum2 = 0;
    int intNum3 = 100;
    printf("Integer values: %d, %d, %d\n", intNum1, intNum2, intNum3);

    // 🔹 Float variable
    float floatNum1 = -100.0f;
    float floatNum2 = 0.0f;
    float floatNum3 = 100.0f;
    printf("Float values: %.2f, %.2f, %.2f\n", floatNum1, floatNum2, floatNum3);

    // 🔹 Character variable
    char char1 = 'a';
    char char2 = 'b';
    char char3 = 'c';
    printf("Character values: %c, %c, %c\n", char1, char2, char3);

    // 🔹 Double variable
    double doubleNum1 = -100.0;
    double doubleNum2 = 0.0;
    double doubleNum3 = 100.0;
    printf("Double values: %.2lf, %.2lf, %.2lf\n", doubleNum1, doubleNum2, doubleNum3);

    // 🔹 Boolean variable
    bool isTrue = true;
    bool isFalse = false;
    printf("Boolean values: %d (true), %d (false)\n", isTrue, isFalse);
    // Note: In C, true = 1 and false = 0

    // 🔹 String (character array)
    char message[] = "Hello, World!";
    printf("String value: %s\n", message);

    // 🔹 Small arithmetic example
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    // ✅ Program finished successfully
    return 0;
}
