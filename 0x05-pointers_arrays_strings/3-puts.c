#include "main.h"
/**
 * _puts - the function prints the same string.
 * @str: the input variable
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
