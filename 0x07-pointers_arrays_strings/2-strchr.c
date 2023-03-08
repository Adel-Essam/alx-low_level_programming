#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	int i;
boolean bl = 1, bk = 1;

while (s[i] != '\0')
{
if (s[i] != c)
{
bl = 0;
}
else
{
return (c);
bl = 1;
bk = 0;
}
i++;
}
if (bl == 0 && bk == 1)
return (NULL);
}
