#include "main.h"

/**
 * print_rev - the function reverses a string and prints it.
 * @s: the first input string
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
_putchar('\n');
}
