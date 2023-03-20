#include "main.h"

/**
 * _puts_recursion - prints the string followed by a new line.
 * @s: the string to print
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
_putchar(s[i]);
i++;
_puts_recursion(s + 1);
}
