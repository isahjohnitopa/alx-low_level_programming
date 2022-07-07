#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - To prints all the numbers from n to 98.
 * Return: always return 0
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
	}
	return (0);
}
