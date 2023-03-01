#include "main.h"

/**
 * _strlen - the function returns the length of a string.
 * @s: the input variable
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
	i++;
}
return (i);
}
