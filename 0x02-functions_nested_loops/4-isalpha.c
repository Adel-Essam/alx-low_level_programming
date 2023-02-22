#include "main.h"
/**
 * _isalpha - print 1 if lower or upper or print 0.
 *
 * @c: The character in ASCII code
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
