#include "main.h"

/**
 * rev_string - the function reverses a string and prints it.
 * @s: the first input string
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int i = 0;

	while (s[i] != '\0')
	{
		i++;
		_putchar(s[i]);
	}
i = i - 1;
_putchar('\n');
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
