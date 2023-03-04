#include "main.h"

/**
 * puts_half - the function prints half of the string.
 * @str: the input string
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int i = 0, j;

while (str[i] != '\0')
{
	i++;
}
j = (i / 2);
while (j <= i)
{
	_putchar(str[j]);
	j++;
}
_putchar('\n');
}
