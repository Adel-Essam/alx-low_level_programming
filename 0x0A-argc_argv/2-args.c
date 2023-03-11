#include <stdio.h>
/**
 * main - the program prints the number of aguments each in a new line.
 * @argc: the int paramiter(number of arguments)
 * @argv: the string paramiter(the name and arguments after)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
