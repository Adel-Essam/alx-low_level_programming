#include "main.h"

/**
 * _abs - return the absolute value of i.
 *
 * @i: The character in ASCII code
 *
 * Return: Always 0 (Success)
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
