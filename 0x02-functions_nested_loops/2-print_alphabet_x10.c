#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, o;

	for (o = 0 ; o < 10 ; o++)
	{
		for (i = 97 ; i < 123 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
