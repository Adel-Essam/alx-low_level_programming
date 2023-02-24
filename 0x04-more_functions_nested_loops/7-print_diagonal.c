#include "main.h"

/**
 * print_diagonal - prints \ as many as user wants  .
 * @n: the input no. times
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int i, j;

for (i = 1 ; i <= n ; i++)
{
for (j = 1 ; j <= i ; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
