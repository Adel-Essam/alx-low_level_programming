#include "main.h"

/**
 * swap_int - the function swaps two integers.
 * @a: the first input variable
 * @b: the second input variable
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
