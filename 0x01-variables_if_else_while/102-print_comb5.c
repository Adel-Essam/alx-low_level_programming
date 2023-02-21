#include <stdio.h>

/**
 * main - print_comb5.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0 ; i <= 20 ; i++)
	{
		for (j = 0 ; j <= 20 ; j++)
		{
			if (i < j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
