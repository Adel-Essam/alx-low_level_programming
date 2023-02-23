#include "main.h"

/**
 * _isdigit - returns 1or 0 .
 * @c: the character
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
