#include <stdio.h>

/**
 * main - putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *p = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		putchar(p[i]);
	}
putchar('\n');
return (0);
}
