#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int max = a;

if (b > a)
{
max = b;
}
if (c > a)
{
max = c;
}
return (max);
}
