#include "main.h"

/**
 * _islower - print 1 if lower or 0.
 *
 * @c: The character in ASCII code
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
