#include "main.h"

/**
 * print_binary - function that print the binary rep of and unsigned int
 * @n: The number to print
 *
 * Return: The converted binary number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
