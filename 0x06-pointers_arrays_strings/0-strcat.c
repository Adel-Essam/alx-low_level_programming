#include "main.h"

/**
 * _strcat - the function concatenates two strings.
 * @dest: the first input variable
 * @str: the second input variable
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;
while (dest[i] != '\0')
{
putchar(dest[i]);
i++;
}
putchar(' ');
while (src[j] != '\0')
{
putchar(src[j]);
j++;
}
putchar('\n');
}
