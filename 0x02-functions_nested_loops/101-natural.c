#include <stdio.h>
/**
 * main - print the numbers that's can be divided by 3 or 5.
 * *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int i, sum;

	for (i = 1024 ; i >= 0 ; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
printf("%d", sum);
putchar('\n');
return (0);
}
