#include <stdio.h>
/**
 * main - print fibonacci numbers.
 * *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x = 1, y = 2, z;

	for (i = 1 ; i <= 50 ; i++)
	{
		z = x + y;
		printf("%d, ", z);
		x = y + z;
		printf("%d, ", x);
		y = x + z;
		printf("%d, ", y);
	}
return (0);
}
