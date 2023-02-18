#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: always 0
 */
int main(void)
{
	char ch,ch2;

	for (ch = '0' ; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch2 = 'a' ; ch2 <= 'f'; ch2++)
	{
		putchar(ch2);
	}
	return (0);
}
