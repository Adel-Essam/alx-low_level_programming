#include <stdio.h>
/**
 * main - prints the multiplication of two nums followed by a new line.
 * @argc: the int paramiter(number of arguments)
 * @argv: the string paramiter(the name and arguments after)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
		return (0);
	}
}
