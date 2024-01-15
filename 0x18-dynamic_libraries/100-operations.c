#include <stdio.h>

/**
 * add - Add two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the addition
 */
int add(int a, int b) {
    return a + b;
}

/**
 * sub - Subtract two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the subtraction
 */
int sub(int a, int b) {
    return a - b;
}

/**
 * mul - Multiply two integers
 * @a: First integer
 * @b: Second integer
 * Return: Result of the multiplication
 */
int mul(int a, int b) {
    return a * b;
}

/**
 * div - Divide two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 * Return: Result of the division
 */
int div(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

/**
 * mod - Compute the modulus of two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 * Return: Result of the modulus operation
 */
int mod(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Modulus by zero\n");
        return 0;
    }
    return a % b;
}
