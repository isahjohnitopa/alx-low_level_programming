#include "main.h"

/**
 * print_alphabet - To prints alphabets in lowercase
 */
void print_alphabet_x10(void)
{
       	int j;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (j = 'a'; j <= 'z'; j++)
        		_putchar(j);
		_putchar('\n');
       	}
}
