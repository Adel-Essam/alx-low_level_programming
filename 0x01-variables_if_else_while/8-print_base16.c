#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	char ch2;

	for (ch2 = 'a' ; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
