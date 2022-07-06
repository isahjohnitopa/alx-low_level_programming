#include "main.h"

/**
 * _isalpha - For lower character
 * @c: parameter
 * Return: return 1 or 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
