#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: always 0
 */
int main(void)
{
	for (char ch = '0' ; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (char ch = 'a' ; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
