#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the summtion of the nums followed by a new line.
 * @argc: the int paramiter(number of arguments)
 * @argv: the string paramiter(the name and arguments after)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}

