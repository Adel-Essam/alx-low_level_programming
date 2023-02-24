#include "main.h"

/**
 * print_square - prisizets # as masizey as user wants  .
 * @size: the input no. times
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
int i, j;

for (i = 1 ; i <= size ; i++)
{
for (j = 1 ; j <= size ; j++)
{
_putchar(' ');
_putchar('#');
}
_putchar('\n');
}
}
