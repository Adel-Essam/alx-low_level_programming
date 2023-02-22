#include "main.h"

/**
 * print_sign - return 1 if n>0 or 0 if n=0 or -1 if n< 0.
 *
 * @n: The character in ASCII code
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
