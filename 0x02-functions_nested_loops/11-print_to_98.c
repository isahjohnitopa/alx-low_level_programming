#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - To prints all the numbers from n to 98.
 * Return: always return 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
		printf("98");
		putchar('\n');
}
