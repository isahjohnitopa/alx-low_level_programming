#include "main.h"

/**
 * print_last_digit - return the last digit
 * @n: parameter
 * Return: absolute 0
 */
int print_last_digit(int n)
{
        if (n < 0)
                n = -n;
        return (n % 10);
}
