/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */
char *string_toupper(char *)
{
int i;

i = 0;
while (s[i] != '\0')
	{

		if (s[i] <= 122 && s[i] >= 97 )
		{
			putchar(s[i] - 32);
		}
		else
		{
			putchar(s[i]);
		}
		i++;
	}
putchar('\n');
}
