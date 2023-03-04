#include "main.h"

/**
 * puts2 - the function prints and skpips one character.
 * @str: the input string
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
i++;
	}
}
